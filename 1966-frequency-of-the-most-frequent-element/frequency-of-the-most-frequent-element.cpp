#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public: // Desi-Developerr
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long left = 0, total = 0, maxFreq = 0;
        
        for (long long right = 0; right < nums.size(); right++) {
            total += nums[right];
            
            // Shrink window while condition fails
            while (nums[right] * (right - left + 1) - total > k) {
                total -= nums[left];
                left++;
            }
            
            maxFreq = max(maxFreq, right - left + 1);
        }
        return maxFreq;
    }
};