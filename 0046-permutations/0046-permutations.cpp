class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> used(nums.size(), false);

        function<void()> backtrack = [&]() {
            if (current.size() == nums.size()) {
                ans.push_back(current);
                return;
            }

            for (int i = 0; i < nums.size(); i++) {
                if (used[i])
                    continue;

                used[i] = true;
                current.push_back(nums[i]);

                backtrack();

                current.pop_back();
                used[i] = false;
            }
        };

        backtrack();
        return ans;
    }
};