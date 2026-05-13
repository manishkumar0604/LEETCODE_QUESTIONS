
class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> changes(2 * limit + 2, 0);

        for (int i = 0; i < n / 2; i++) {
            int left = nums[i];
            int right = nums[n - i - 1];

            int pairSum = left + right;
            int minSum = min(left, right) + 1;
            int maxSum = max(left, right) + limit;

            changes[2] += 2;                 
            changes[minSum] -= 1;           
            changes[pairSum] -= 1;          
            changes[pairSum + 1] += 1;      
            changes[maxSum + 1] += 1;       
        }

        int answer = INT_MAX;
        int moves = 0;

        for (int target = 2; target <= 2 * limit; target++) {
            moves += changes[target];
            answer = min(answer, moves);
        }

        return answer;
    }
};