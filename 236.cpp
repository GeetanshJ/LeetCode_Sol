/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return nullptr;
        if(root->val == p->val) return p;
        if(root->val == q->val) return q;
        
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        
        if(left == NULL && right == NULL) return NULL;
        if(left != NULL && right == NULL) return left;
        if(left == NULL && right != NULL) return right;
        
        return root;
    }
};