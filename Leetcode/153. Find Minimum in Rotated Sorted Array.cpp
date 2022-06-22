class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int l = 0, r = nums.size()-1;
        int mid;
        while(l<r){
            mid = (l+r)/2;
            if(nums[l]<nums[r]) return nums[l];
            else if(nums[mid]>nums[r]) l = mid +1; 
            else r = mid;
        }
        
        return nums[l];
    }
};
