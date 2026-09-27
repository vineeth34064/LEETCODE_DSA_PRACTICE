class Solution {
public:
    long long sum(vector<int>&nums){
        long long sum = 0;
        for(long long i :nums){
            sum+=i;
        }
        return sum;
    }
    bool canTransform(vector<int>& source, vector<int>& target) {
        return sum(source)==sum(target);
    }
};