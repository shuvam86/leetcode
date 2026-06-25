class Solution {
public:
     void fun(int ind,vector<int> &ds,vector<vector<int>> &res,vector<int> &can,int target) {
        if(ind == can.size()) {
            if(target == 0) {
                res.push_back(ds);
            }
            return;
        }

        if(can[ind] <= target) {
            ds.push_back(can[ind]);
            fun(ind,ds,res,can,target - can[ind]);
            ds.pop_back();
        }

        fun(ind+1,ds,res,can,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        fun(0,ds,res,candidates,target);
        return res;
    }
};