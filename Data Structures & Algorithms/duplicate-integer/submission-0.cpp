using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> test;
        for(auto i : nums){
            test.insert(i);
        }
        if (nums.size()== test.size())
            return false;
        else
            return true;

    }
};