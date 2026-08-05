class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0, high = s.size();
        while(low<high){
            if(!isalnum(static_cast<unsigned char>(s[low]))){
                low++;
                continue;
            }
            if(!std::isalnum(static_cast<unsigned char>(s[high]))){
                high--;
                continue;
            }
            if(tolower(static_cast<unsigned char>(s[low])) != tolower(static_cast<unsigned char>(s[high]))){
                return false;
            } else {
                low++;
                high--;
            }
        }
        return true;

    }
};
