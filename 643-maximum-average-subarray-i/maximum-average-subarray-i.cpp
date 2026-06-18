class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int global = 0;

        for (int i = 0; i < k; i++) {
            global += nums[i];
        }

        int maxSum = global;

        for (int i = k; i < nums.size(); i++) {
            global += nums[i];
            global -= nums[i - k];

            maxSum = std::max(maxSum, global);
        }

        return (double)maxSum / k;
    }
};