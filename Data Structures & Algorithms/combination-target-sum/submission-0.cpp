class Solution {
public:
     void helper(vector<int>& nums , vector<int> &ans , int i, vector<vector<int>> &res,int target){
        if(target==0){
            res.push_back(ans);
            return;
        }
        if(i==nums.size() or target<0) return;
        ans.push_back(nums[i]);
        helper(nums,ans,i,res,target-nums[i]);
        ans.pop_back();
        helper(nums,ans,i+1,res,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>ans;
        helper(nums,ans,0,res,target);
        return res;
    }
};
