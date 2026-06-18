class Solution {
public:
    int search(vector<int>& nums, int k) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=j+(i-j)/1;
            if(nums[mid]==k) return mid;
            if(nums[mid]>=nums[i]){
                if(k>=nums[i] and k<=nums[mid]){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                if(k>=nums[mid] and k<=nums[j]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
        }
        return -1;
       
    }
};
