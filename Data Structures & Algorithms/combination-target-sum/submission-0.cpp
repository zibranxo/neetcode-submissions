class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void dfs(int idx, int target, vector<int>& nums) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (idx == nums.size() || target < 0) return;

        curr.push_back(nums[idx]);
        dfs(idx, target - nums[idx], nums);
        curr.pop_back();

        dfs(idx + 1, target, nums);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        dfs(0, target, nums);
        return ans;
    }
};