class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int length = 1;
        int maxm = 1;
        unordered_set<int>st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        vector<int>ans;
        for(auto x:st){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        for(int i= 0; i < ans.size()-1; i++){
            if(ans[i+1]==ans[i]+1){
                length++;
            }else{
                length=1;
            }
                maxm = max(maxm,length);
        }
        return maxm;
    }
};