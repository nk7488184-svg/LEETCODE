class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
            int st = 0;
            int end = n - 1;
            while (st <= end) {
                swap(nums[st], nums[end]);
                st++;
                end--;
            }
        } else {
            for (int i = n - 1; i >= pivot; i--) {
                if (nums[i] > nums[pivot]){
                swap(nums[pivot], nums[i]);
                break;
                }
            }
            int st = pivot + 1, end = n - 1;
            while (st <= end) {
                swap(nums[st], nums[end]);
                st++;
                end--;
            }
        }
    }
};