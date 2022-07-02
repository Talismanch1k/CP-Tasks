/*
162. Find Peak Element

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -?. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        const int MINT = -99999999;
        if(nums.size()==1 ) return 0;
        int l = 0, r = nums.size()-1;
        int mid;
        while(l<r){
            mid = (l+r)/2;
            int nmid = nums.size()>mid+1 ? nums[mid+1] : MINT;
            int pmid = mid-1>=0 ? nums[mid-1] : MINT;
            if(pmid<nums[mid] && nmid<nums[mid]) return mid;
            if(nums[mid+1]>nums[mid]) l = mid+1;
            else r = mid;
        }
        return l;
    }
};
