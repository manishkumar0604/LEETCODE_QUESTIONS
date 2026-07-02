class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // Edge cases
        if (n == 1) return 0;                //for only 1 element.
        if (nums[0] > nums[1]) return 0;    //for first element in nums.
        if (nums[n - 1] > nums[n - 2]) return n - 1;  //for last element in nums.

        int low = 1, high = n - 2;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If nums[mid] is the peak
            if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
                return mid;

            // Move to the side which has the bigger neighbor
            if (nums[mid] > nums[mid - 1])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1; // theoretically never reached
    }
};