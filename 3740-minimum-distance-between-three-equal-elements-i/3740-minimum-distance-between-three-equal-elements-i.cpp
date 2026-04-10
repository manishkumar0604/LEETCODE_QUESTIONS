class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for (int i=0;i<n;i++) {
            for (int j=i+1; j<n; j++) {
                for (int k =j+1; k<n; k++) {
                    // Check if all three values are equal
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        int dist = abs(i - j) + abs(j - k) + abs(k - i);
                        ans = min(ans, dist);
                    }
                }
            }
        }
       // If no valid triplet found
        if (ans == INT_MAX) return -1;

        return ans;
    }
};