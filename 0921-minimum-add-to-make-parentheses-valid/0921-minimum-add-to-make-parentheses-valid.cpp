class Solution {
public:
    int minAddToMakeValid(string s) {
        int minadd=0;
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
                minadd++;
            }else if(!st.empty()&&st.top()=='('){
                st.pop();
                minadd--;
            }else{
                minadd++;
            }
        }
        return abs(minadd);
    }
};