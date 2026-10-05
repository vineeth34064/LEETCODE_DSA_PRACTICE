class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int final = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('){
                score++;
            }
            else{
                score--;
                if(s[i-1]=='('){
                    final+=pow(2,score);
                }
            }
        }
        return final;
    }
};