class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            if (numbers[left] + numbers[right] == target) {
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                break;
            } else if (numbers[left] + numbers[right] > target) {
                right -= 1;
            } else {
                left += 1;
            }
        }
        return ans;
    }
};