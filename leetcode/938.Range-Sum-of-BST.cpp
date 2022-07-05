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
    int sum = 0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (isInTheRange(low, high, root->val)) {
            sum += root->val;
        }
        if (root->left != nullptr) {
            rangeSumBST(root->left, low, high);
        }
        if (root->right != nullptr) {
            rangeSumBST(root->right, low, high);
        }
        return sum;
    }
    bool isInTheRange(int from, int to, int value) {
        return (value >= from) && (value <= to);
    }
};