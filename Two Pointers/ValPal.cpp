class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i += 1) {
            if (iswalnum(s[i])) {
                temp += s[i];
            }
        }
        string check = temp;
        transform(check.begin(), check.end(), check.begin(), ::tolower);
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        reverse(check.begin(), check.end());
        if (check == temp) {
            return 1;
        }
        return 0;
    }
};
