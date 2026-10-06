class Solution {
public:
    void helper(vector<vector<int>>&v,vector<int>& nums,vector<int>&ans,int i, int n){       if(i==n){
            v.push_back(ans);
            return;
        }
        ans.push_back(nums[i]); 
        helper(v,nums,ans,i+1,n);
        ans.pop_back();
        helper(v,nums,ans,i+1,n);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ans;
        int n=nums.size();
        helper(v,nums,ans,0,n);
        return v;
    }
};
