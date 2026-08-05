class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sz1 = s1.size(), sz2 = s2.size();

        int start = 0;
        vector<int> sfreq(26, 0);
        for(auto i : s1){
            sfreq[i-'a']++;
        }
        vector<int> bfreq(26, 0);
        string temp;
        for (int i =0; i < s2.size(); i++){
            temp.push_back(s2[i]);
            bfreq[s2[i]-'a']++;
            if (temp.size()>s1.size()){
                bfreq[s2[start]-'a']--;
                temp.erase(temp.begin());
                start++;
            }
            if(temp.size() == s1.size()){
                if(sfreq == bfreq) return true;
            }
        }
        return false;
    }
};
