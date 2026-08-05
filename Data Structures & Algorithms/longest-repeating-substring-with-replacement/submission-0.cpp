class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int ans =0, sz = s.size(), mFreq = 0, start = 0;
        for(int i =0; i<sz; i++){
            freq[s[i]-'A']++;
            mFreq = max(mFreq, freq[s[i] -'A']);
            if((i-start+1-mFreq) > k){
                freq[s[start] - 'A']--;
                start++;
            } else {
                ans = max(ans, i - start +1);
            }

        }
        return ans;
    }
};
