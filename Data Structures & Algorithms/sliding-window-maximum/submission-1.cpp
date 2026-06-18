class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int windsize=0;
        vector<int>ans;
        deque<int>q;
        for(int i=0;i<nums.size();i++){
            while(!q.empty() and q.front()<=i-k){
                q.pop_front();
            }
            while(!q.empty() and nums[i]>nums[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
            if((i+1)%k==0) windsize++;
            if(windsize>0 and !q.empty()){
                ans.push_back(nums[q.front()]);
            }
        }
        return ans;
    }
};
