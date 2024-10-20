class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        bool flag = true;
        if (s.length() < t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != t[i]) {
                flag = false;
            }
        }
        if (flag) {
            return 1;
        } else {
            return 0;
        }
    }
};
