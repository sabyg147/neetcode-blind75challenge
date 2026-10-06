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
    TreeNode* res = NULL;
    void fun(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL)
            return;
        if(root->val==p->val || root->val==q->val){
            res = root;
            return;
        }


        if(root->val > q->val)
            fun(root->left,p,q);
        else if(root->val < p->val)
            fun(root->right,p,q);
        else{
                res = root;
                return;
        }




    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(q->val > p->val)
            fun(root,p,q);
        else
            fun(root,q,p);

        return res;

        
    }
};
