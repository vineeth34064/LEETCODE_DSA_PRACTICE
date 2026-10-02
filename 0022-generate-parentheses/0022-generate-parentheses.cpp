class Solution {
public:
    bool isvalid(string s){
        int balance = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('){
                balance++;
            }else{
                balance--;
            }
            if(balance < 0)return false;
        }
        return balance == 0;
    }
    void permute(string s,int opencount,int closecount,int n,vector<string>&allcombos){
        if(opencount == n&&closecount == n){
            allcombos.push_back(s);
            return ;
        }
        if(opencount < n){
            permute(s+"(",opencount+1,closecount,n,allcombos);
            
        }
        if(closecount < n){
            permute(s+")",opencount,closecount+1,n,allcombos);
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string>allcombos;
       vector<string>valid;

       permute("",0,0,n,allcombos);
       for(string s:allcombos){
        if(isvalid(s)){
            valid.push_back(s);
        }
       }
       return valid;
    }
};