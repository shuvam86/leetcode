class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int r = 0; r < nums.size(); r++) {
            if(nums[r] != 0) {
                swap(nums[r],nums[left]);
                left++;
            }
        } 
    }
};