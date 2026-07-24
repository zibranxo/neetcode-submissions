class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n + 2, 0), dp2(n+2, 0);

        for (int i = n - 1; i >= 1; i--) {
            int take = nums[i] + dp1[i + 2], skip = dp1[i + 1];
            dp1[i] = max(take, skip);
        }
        for (int i = n - 2; i >= 0; i--) {
            int take = nums[i] + dp2[i + 2], skip = dp2[i + 1];
            dp2[i] = max(take, skip);
        }
        return max(dp1[1], dp2[0]);
    }
};