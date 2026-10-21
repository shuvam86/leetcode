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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        help(root,d);
        return d;
    }

    int help(TreeNode* root, int &d) {
        // int d = 0;
        if(!root) return 0;
        int left = help(root->left,d);
        int right = help(root->right,d);
        d = max(d,left+right);

        return max(left,right) + 1;

    }

};