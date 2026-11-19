class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        //need to read this code , revision needed
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int score = INT_MAX;
        for (int i = 0; i < 3; i++) {
            int low = nums[i];
            int high = nums[n - 3 + i];
            score = min(score, high - low);
        }
        return score;
    }
};