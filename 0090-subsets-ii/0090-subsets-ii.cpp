class Solution {
public:
    void getAllSubsets(vector<int> &nums,vector<vector<int>> &allSubsets,vector<int> &ans,int i) {
        if(i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getAllSubsets(nums,allSubsets,ans,i+1);

        ans.pop_back();

        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx-1]) {
            idx++;
        }
        getAllSubsets(nums,allSubsets,ans,idx);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> allSubsets;
        getAllSubsets(nums,allSubsets,ans,0);
        return allSubsets;
    }
};