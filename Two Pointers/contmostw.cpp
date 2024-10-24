class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int ans = 0;
        while (left < right) {
            int temp = min(height[left], height[right]);
            int tp = right - left;
            ans = max(ans, temp * tp);
            if (height[left] < height[right]) {
                left++;
            } else {
                right -= 1;
            }
        }
        return ans;
    }
};
