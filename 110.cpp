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
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int leftH = height(root->left);
        int rightH = height(root->right);
        return max(leftH,rightH) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return  true;
        int diff = abs(height(root->left)-height(root->right));
        bool ans = (diff <= 1);

        bool leftB = isBalanced(root->left);
        bool rightB = isBalanced(root->right);

        if(ans && leftB && rightB){
            return true;
        }

        else return false;
    }
};