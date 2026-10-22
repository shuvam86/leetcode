/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int mx = INT_MIN;
        help(root,mx);
        return mx;
    }

    int help(TreeNode* root,int &mx) {
        if(root == NULL) {
            return 0;
        }

        int left = max(0, help(root->left,mx));
        int right = max(0, help(root->right,mx));

        mx = max(mx, left + right + root->val);
        return root->val + max(left, right);

    }

};