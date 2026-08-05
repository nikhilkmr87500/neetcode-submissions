class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
    for (int n : nums) {
        freq[n]++;
    }

    // Bucket: index = frequency, value = list of numbers with that frequency
    vector<vector<int>> buckets(nums.size() + 1);
    for (auto &p : freq) {
        buckets[p.second].push_back(p.first);
    }

    vector<int> ans;
    for (int i = buckets.size() - 1; i >= 0 && ans.size() < k; i--) {
        for (int n : buckets[i]) {
            ans.push_back(n);
            if (ans.size() == k) break;
        }
    }
    return ans;
    }
};
