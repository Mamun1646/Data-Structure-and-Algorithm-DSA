/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


//  Algorithom :
//  1. root is NULL .LCA is also definetly null;
//  2. If root is equal to p or q. Then root is the LCA.
//  3. Recursively visit left subtree or right subtree
//  4. If any subtree is NUll ,other subtree will be the LCA.
//  5. other wise root is the LCA

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       if(!root)
           return NULL;
        if(root->val ==p->val || root->val ==q->val) return  root;
        TreeNode * left =lowestCommonAncestor(root->left,p,q);
        TreeNode *  right =lowestCommonAncestor(root->right,p,q);
        if(left==NULL ) return right;
        if(right==NULL) return left;
        return  root;
        
        
        
        
        
    }
};