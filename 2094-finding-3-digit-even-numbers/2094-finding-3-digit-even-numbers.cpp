class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        vector<int>freq(10,0);

        // declaring all the elements frequencies as zero;
        
        for(int i = 0; i < digits.size(); i++){
            freq[digits[i]]++;
        }

        for(int i = 100; i <= 998; i+=2){
            int x = i;
            vector<int>cnt(10,0);

            cnt[x%10]++;
            x/=10;
            cnt[x%10]++;
            x/=10;
            cnt[x%10]++;

            bool k = true;

            for(int i = 0; i < 10; i++){
                if(cnt[i]>freq[i]){
                    k = false;
                    break;
                }
            }
            if(k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};