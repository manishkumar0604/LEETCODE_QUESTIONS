class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string merg=s+s;

        if(merg.find(goal)!=string::npos) return true;
        else return false;
    }
};