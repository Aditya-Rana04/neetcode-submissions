class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            int target=-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    
                }
                else if(nums[j]+nums[k]>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto x : s){
            ans.push_back(x);
        }
        return ans;
    }
};
