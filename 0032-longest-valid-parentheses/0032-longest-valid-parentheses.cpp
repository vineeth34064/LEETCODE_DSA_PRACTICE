class Solution {
public:
    int longestValidParentheses(string s) {
        int onefullset = 0;
        int open = 0;
        int close = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                open++;
            if (s[i] == ')')
                close++;
            if (open == close)
                onefullset = max(onefullset, open + close);
            if (close > open) {
                close = 0;
                open = 0;
            }
        }
        open = 0;
        close = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '(')
                open++;
            if (s[i] == ')')
                close++;
            if (open == close)
                onefullset = max(onefullset, open + close);
            if (open > close) {
                open = 0;
                close = 0;
            }
        }
        return onefullset;
    }
};