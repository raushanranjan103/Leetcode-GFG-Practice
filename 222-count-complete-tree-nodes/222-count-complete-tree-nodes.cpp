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
     vector<int>res;
    void raushan(TreeNode* root)
    {
         if(root!=NULL)
        {res.push_back(root->val);
         countNodes(root->left);
         countNodes(root->right);
        }
    }
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int c=0;
     raushan(root);
        return res.size();
    }
};