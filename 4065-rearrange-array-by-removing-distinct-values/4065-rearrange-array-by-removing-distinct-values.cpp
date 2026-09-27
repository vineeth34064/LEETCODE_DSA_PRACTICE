class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;

        for (int x : nums)
            freq[x]++;

        vector<int> ans;

        while (!freq.empty()) {
            vector<int> eraseKey;

            for (auto &it : freq) {
                ans.push_back(it.first);
                it.second--;

                if (it.second == 0)
                    eraseKey.push_back(it.first);
            }

            for (int key : eraseKey)
                freq.erase(key);
        }

        return ans;
    }
};