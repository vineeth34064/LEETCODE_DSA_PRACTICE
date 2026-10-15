class Solution {
public:
    
    int sumCounts(vector<int>& nums) {
        int countsum= 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int>st;
            for(int j = i; j < nums.size(); j++){
                st.insert(nums[j]);
                long long len = st.size()*st.size();
                countsum+=len;
            }
        }
        return (int)countsum;
    }
};