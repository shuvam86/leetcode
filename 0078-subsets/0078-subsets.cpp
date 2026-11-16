class Solution {
public:

void getAllSubsets(vector<int> &nums, vector<vector<int>> &allSubsets,vector<int> &ans,int i) {
    if(i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    ans.push_back(nums[i]);
    getAllSubsets(nums,allSubsets,ans,i+1);

    ans.pop_back();
    getAllSubsets(nums,allSubsets,ans,i+1);


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, allSubsets,ans,0);
        return allSubsets;
    }
};