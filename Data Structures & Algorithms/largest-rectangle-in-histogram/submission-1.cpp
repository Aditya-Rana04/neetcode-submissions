class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>right(n);
        vector<int>left(n);
        int area,maxarea=0;
        stack<int>s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i]=s.empty()?n:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=0;i<n;i++){
            while(!s.empty() and heights[s.top()]>=heights[i]){
                s.pop();
            }
            left[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        for(int i=0;i<n;i++){
            area=(right[i]-left[i]-1)*heights[i];
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};
