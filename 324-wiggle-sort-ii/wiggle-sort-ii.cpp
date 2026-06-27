class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted(nums);
        
        sort(sorted.begin(), sorted.end());

        int mid = (n + 1) / 2;   // left half size
        int j = mid - 1;         // pointer for left half
        int k = n - 1;           // pointer for right half

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                nums[i] = sorted[j--];
            } else {
                nums[i] = sorted[k--];
            }
        }
    }
};