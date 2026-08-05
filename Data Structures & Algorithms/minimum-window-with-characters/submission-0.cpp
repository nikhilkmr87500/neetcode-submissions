class Solution {
public:
    string minWindow(string s, string t) {
        int szs = s.size(), szt = t.size();
        if(szt>szs) return "";
        unordered_map<char, int> store_t;
        unordered_map<char, int> store_s;
        int ans = INT_MAX, start =0, end =0;

        
        for(int i = 0; i< szt; i++){
            store_t[t[i]]++;
        }
        
        int st_m =start, end_min = end;
        int count = 0;
        for(int i = 0; i< szs; i++){
            store_s[s[i]]++;

            if(store_t.count(s[i]) && store_s[s[i]] == store_t[s[i]]){
                count++;
            }
            
            while(store_t.size() == count){
                if(i - start +1 < ans){
                    ans = i - start +1;
                    st_m = start; 
                }
                store_s[s[start]]--;
                if(store_t.count(s[start]) && store_s[s[start]] < store_t[s[start]]){
                    count--;
                }
                start++;
            }
        }
        return ans == INT_MAX ? "" : s.substr(st_m, ans);
    }
};
