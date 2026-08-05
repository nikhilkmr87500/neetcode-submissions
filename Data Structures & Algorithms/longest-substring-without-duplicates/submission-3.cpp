class Solution {
public:


std::string trimBeforeChar(const std::string &input, char delimiter) {
    size_t pos = input.find(delimiter);
    if (pos == std::string::npos) {
        // Character not found, return original string
        return input;
    }
    // Return substring starting from the delimiter
    return input.substr(pos + 1); // +1 to skip the delimiter itself
}
    int lengthOfLongestSubstring(string s) {
        int ans =0, sz = s.size(), count =0;
        if(sz == 1) return 1;
        queue<char> check;
        string tmp, str;
        str.push_back(s[0]) ;
        for(int i = 1; i<sz; i++){
            size_t pos = str.find(s[i]);            
            str.push_back(s[i]);
            if(pos != string::npos){
                str = str.substr(pos+1);
            }
            count = str.size();
            ans = max(ans, count);
                
            
        }

        return ans;
        
    }
};
