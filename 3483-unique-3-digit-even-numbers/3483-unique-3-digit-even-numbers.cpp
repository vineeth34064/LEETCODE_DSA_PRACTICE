class Solution {
public:
    int concatint(int a,int b,int c){
        string str="";
        str=to_string(a)+to_string(b)+to_string(c);
        return stoi(str);
    }
    int totalNumbers(vector<int>& digits) {
        int count = 0;
        set<int>st;
        for(int i = 0; i < digits.size(); i++){
            for(int j = 0; j < digits.size(); j++){
                for(int k = 0; k < digits.size(); k++){
                    if(i == j||j == k||k == i)continue;
                    if(digits[i]==0)continue;
                    int num = concatint(digits[i],digits[j],digits[k]);

                    if(num%2==0){
                        st.insert(num);
                    }
                }
            }
        }
        return st.size();
    }
};