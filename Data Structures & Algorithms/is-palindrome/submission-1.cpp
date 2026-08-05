class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0, high = s.size();
        while(low<high){
            if(!isalnum(s[low])){
                low++;
                continue;
            }
            if(!std::isalnum(s[high])){
                high--;
                continue;
            }
            if(tolower(s[low]) != tolower(s[high])){
                return false;
            } else {
                low++;
                high--;
            }
        }
        return true;

    }
};
