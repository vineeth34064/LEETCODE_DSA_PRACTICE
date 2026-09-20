class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            int count = 26-(s[i]-'a');
            count*=(i+1);
            sum+=count;
        }
        return sum;
    }
};