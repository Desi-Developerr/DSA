class Solution {
public: // Desi-Developerr
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        
        // Find pivot (first index where nums[i] < nums[i+1])
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        
        // Reverse entire array if no pivot found
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // Find smallest element > nums[ind] to swap with
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        
        // Reverse elements after pivot
        reverse(nums.begin() + ind + 1, nums.end());
    }
};