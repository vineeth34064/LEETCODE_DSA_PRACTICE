class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int>freq;
        int prefixsum = 0;
        freq[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            prefixsum+=nums[i];
            int remainder = ((prefixsum % k) + k) % k;
            count+=freq[remainder];    
            freq[remainder]++;
        }
        return count;
    }
};