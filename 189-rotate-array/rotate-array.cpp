class Solution {
public: // Desi-Developerr
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k %= n;

        // Reverse the whole array
        reverse(nums.begin(), nums.end());
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        // Reverse the rest
        reverse(nums.begin() + k, nums.end());
    }
};