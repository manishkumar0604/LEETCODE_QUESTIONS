class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for (string &word : words) {
            int sum = 0;
            for (char ch : word) {
                sum += weights[ch - 'a'];
            }
            int rem = sum % 26;
            // Reverse alphabetical mapping:
            // 0 -> z, 1 -> y, ..., 25 -> a
            ans += ('z' - rem);
        }

        return ans;
    }
};