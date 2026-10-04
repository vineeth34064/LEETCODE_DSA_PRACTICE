class Solution {
public:
    int minRotations(string s) {
        int sum = 0;
        int curr = 0;
        for(int i = 0; i < s.size(); i++){
            int next = s[i]- '0';
            int dist = abs(next-curr);
            sum+= min(dist,10-dist);
            curr=next;
        }
        return sum;
    }
};