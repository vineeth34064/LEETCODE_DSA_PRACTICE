class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        long long even = 1;
        long long odd = 0;

        long long count = 0;
        int prefix = 0;

        int mod = 1e9 + 7;

        for(int i = 0; i < arr.size(); i++) {

            prefix += arr[i];

            if(prefix % 2 != 0) {
                count += even;
                odd++;
            }
            else {
                count += odd;
                even++;
            }

            count %= mod;
        }

        return count;
    }
};