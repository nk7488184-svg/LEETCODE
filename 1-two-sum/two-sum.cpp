class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> ans;
        vector<int> nums(num);
        sort(nums.begin(), nums.end());
        int st = 0, end = nums.size() - 1;
        int ans1 = -1, ans2 = -1;
        while (st < end) {
            if (nums[st] + nums[end] == target) {
                ans1 = nums[st];
                ans2 = nums[end];
                break;
            } else if (nums[st] + nums[end] > target) {
                end--;
            } else {
                st++;
            }
        }
        for (int i = 0; i < num.size(); i++) {
            if (num[i] == ans1) {
                ans.push_back(i);
            } else if (num[i] == ans2) {
                ans.push_back(i);
            } else if (ans.size() == 2){
                break;
            }
        }
        return ans;
    }
};