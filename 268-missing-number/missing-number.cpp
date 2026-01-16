class Solution {
public: // Desi-Developerr
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int ans = n;
        for(int i=0; i<n; i++){
            ans^=i;
            ans^=nums[i];
        }
        
        return ans;
        
    }
};