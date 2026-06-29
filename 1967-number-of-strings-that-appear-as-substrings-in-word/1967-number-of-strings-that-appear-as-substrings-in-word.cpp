class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for (string &pattern : patterns) {
            if (word.find(pattern) != string::npos) {
                cnt++;
            }
        }

        return cnt; 
    }
};