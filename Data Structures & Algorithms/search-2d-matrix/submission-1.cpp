class Solution {
public:
    bool helper(vector<vector<int>>& nums, int target,int mid){
        int m=nums[0].size();
        int i=0;
        int j=m-1;
        while(i<=j){
            int midr=(i+j)/2;
            if(target== nums[mid][midr]) return true;
            else if(target>nums[mid][midr]) i=midr+1;
            else j=midr-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int n=nums.size();
        int m=nums[0].size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(target>=nums[mid][0]and target<=nums[mid][m-1]){
                return helper(nums,target,mid);
            }
            else if(target>nums[mid][m-1]){
                i=mid+1;
            }
            else j=mid-1;
        }
        return false;

    }
};
