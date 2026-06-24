class Solution {
public:
    vector<vector<int>> ans;

    void solve(int idx, vector<int>& candidates, int target,
               vector<int>& curr) {

        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {

            // Skip duplicates at the same level
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            curr.push_back(candidates[i]);
            solve(i + 1, candidates, target - candidates[i], curr);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> curr;
        solve(0, candidates, target, curr);

        return ans;
    }
};
