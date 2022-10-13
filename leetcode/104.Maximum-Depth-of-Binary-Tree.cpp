/**
 * @file 104.Maximum-Depth-of-Binary-Tree.cpp
 * @date 2022-10-13
 * @author Sion Han
 * @from https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * @time-taken 10 min
 * @related Tree, Depth-First Tree
 */

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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int l = 1 + maxDepth(root->left);
        int r = 1 + maxDepth(root->right);
        
        return (l <= r) ? r : l;
    }
};