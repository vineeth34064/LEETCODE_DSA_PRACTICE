class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        int total = 0;
        for(int i =0; i < nums.size(); i++){
            total+=nums[i];
        }
        int target = total-x;
        if(target< 0)return -1;
        if(target == 0)return nums.size();
        int left = 0;
        int maxlen = -1;
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            while(sum > target){
                sum-=nums[left++];
            }
            if(sum == target){
                maxlen = max(maxlen,i-left+1);
            }
        }
        return maxlen == -1?-1:nums.size()-maxlen;
    }
};