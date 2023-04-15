class Solution 

{  
    //bool knows(vector<vector<int> >M,int f,int s){
     //return M[f][s];}
//}
    
    public:
    int celebrity(vector<vector<int> >& M, int n) 
    {stack<int>s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    
    while(s.size()>1){
        int first=s.top();
        s.pop();
        int second=s.top();
        s.pop();
        if(M[first][second]==1){
            s.push(second);
        }
        else{
            s.push(first);
        }
         }
    
    int cand=s.top();
    bool gou=false;
    int zero=0;
    bool tou=false;
    int one=0;
    
    for(int i=0;i<n;i++){
        if(M[cand][i]==0){
            zero++;
        }
        if(M[i][cand]==1){
            one++;
        }
       
    }
    if(zero==n){
        gou=true;
    }
    if(one==n-1){
        tou=true;
    }
    
    
    if(tou==true && gou==true) {return cand;}
    else {return -1;}
    
    
    }
     
    
};
