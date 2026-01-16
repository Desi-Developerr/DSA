class Solution {
public: // Desi-Developerr
    int singleNumber(vector<int>& nums) {
        int xor_val = 0;
        for(int i=0; i<nums.size(); i++){
            xor_val=xor_val^nums[i];
        }
        return xor_val;
    }
};