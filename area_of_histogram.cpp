class Solution {
    vector<int> nsmaller(vector<int> h,int n){
        stack<int>s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int curr=h[i];
            while(s.top()!=-1 && h[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);

        }
        return ans;
    }
    vector<int> psmaller(vector<int> h,int n){
        stack<int>s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int curr=h[i];
            while(s.top()!=-1 && h[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);

        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n);
        next=nsmaller(heights,n);
        vector<int>prev(n);
        prev=psmaller(heights,n);
        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newo=l*b;
            area=max(area,newo);
        }
        return area;     
    }
};
