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
    bool isBalanced(TreeNode* root) {
        return help(root) != -1;
    }
    int help(TreeNode* root) {
        if(!root) {
            return 0;
        }

        int h_left = help(root->left);
        if(h_left == -1) return -1;

        int h_right = help(root->right);
        if(h_right == -1) return -1;

        if(abs(h_left - h_right) > 1) return -1;
        
        return max(h_left,h_right) + 1;

    }
 
};