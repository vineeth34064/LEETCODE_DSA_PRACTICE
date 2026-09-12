class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int>freq;
       for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
       }
        int count = 0;
        bool odd = false;
       for(auto it:freq){
            if(it.second%2==0){
                count+=it.second;
            }else{
                count+=it.second-1;
                odd = true;
            }
       }
       return odd?count+1:count;
    }
};