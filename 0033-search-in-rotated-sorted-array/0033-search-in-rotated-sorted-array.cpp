class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[low]<=nums[mid])  //left part of array will be sorted
            {
                if (nums[low] <= target && target <= nums[mid]) {  // check element lie
                //element exists:                                    or not in left part
                high = mid - 1;
                }
                else {
                //element does not exist:
                low = mid + 1;
                }
            }
            else{                       //right part of array will be sorted
                if (nums[mid] <= target && target <= nums[high]) {  // check elemnt lie
                //element exists:
                low = mid + 1;
                }
                else {
                //element does not exist:
                high = mid - 1;
                }
            }
        }
        return -1;
    }
};