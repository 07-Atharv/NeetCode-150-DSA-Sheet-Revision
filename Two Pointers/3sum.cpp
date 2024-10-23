class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        //-2 because at last third position there are chances of having the
        // triplet
        for (int i = 0; i < nums.size() - 2; i += 1) {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
                int lo = i + 1, hi = nums.size() - 1, sum = 0 - nums[i];
                while (lo < hi) {
                    // c+b= -a
                    if (nums[lo] + nums[hi] == sum) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        ans.push_back(temp);

                        // if same low+=1
                        while (lo < hi && nums[lo] == nums[lo + 1]) {
                            lo += 1;
                        }
                        // if same high-=1
                        while (lo < hi && nums[hi] == nums[hi - 1]) {
                            hi--;
                        }
                        lo += 1;
                        hi -= 1;
                    } else if (nums[lo] + nums[hi] < sum) {
                        lo += 1;
                    } else {
                        hi -= 1;
                    }
                }
            }
        }
        return ans;
    }
};
