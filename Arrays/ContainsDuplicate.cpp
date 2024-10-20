class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i += 1) {
            mp[nums[i]] += 1;
        }
        for (auto& x : mp) {
            if (x.second >= 2) {
                return true;
                break;
            }
        }
        return false;
    }
};
