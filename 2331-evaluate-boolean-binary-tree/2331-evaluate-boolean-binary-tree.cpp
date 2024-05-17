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
    bool evaluateTree(TreeNode* root) 
    {
        if(root->val==1||root->val==0)
        {
            return (root->val==1);
        }
        else if(root->val==2)
        {
            bool temp=(evaluateTree(root->left)||evaluateTree(root->right));
            return temp;
        }
        else if(root->val==3)
        {
            bool temp1=(evaluateTree(root->left)&&evaluateTree(root->right));
            return temp1;
        }
        return true;
    }
};