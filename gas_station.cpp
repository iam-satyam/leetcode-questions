class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int st=0,def=0,bal=0;
        for(int i=0;i<gas.size();i++){
            bal+=gas[i]-cost[i];
            if(bal<0){
                def+=bal;
                 st=i+1;
                bal =0;
            }
 }

 if(def+bal>=0){
     return st;
 }
 else{ return -1 ;}

 

        
    }
};
