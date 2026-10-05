class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxm = 0;
       for(int i = 0; i < s.size(); i++){
           int ones = 0;
           int zeros = 0;
           for(int j = i; j < s.size(); j++){
                if(s[j]=='0'){
                    zeros++;
                }else{
                    ones++;
                }

                if(ones >  0&&s[j]=='0'){
                    break;
                }

                if(ones == zeros){
                    maxm = max(maxm,ones+zeros);
                }
           }
       } 
       return maxm;
    }
};