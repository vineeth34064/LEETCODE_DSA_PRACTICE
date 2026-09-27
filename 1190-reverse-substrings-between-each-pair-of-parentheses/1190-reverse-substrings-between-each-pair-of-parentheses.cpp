class Solution {
public:
    string reverseParentheses(string s) {
        while (s.find('(') != string::npos) {
            int open = -1, close = -1;

            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(')
                    open = i;
                if (s[i] == ')') {
                    close = i;
                    break;
                }
            }

            string mid = s.substr(open + 1, close - open - 1);
            reverse(mid.begin(), mid.end());
            s = s.substr(0, open) + mid + s.substr(close + 1);
        }
        return s;
    }
};