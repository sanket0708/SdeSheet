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
    TreeNode*head;
    
    void helper(TreeNode*root,TreeNode*prev,int val,int curr,int depth)
    {
        if(curr==depth)
        {
            TreeNode* newNode = new TreeNode(val);
            if(prev!=NULL && prev->left==root)
            {
                prev->left = newNode;
                newNode->left = root;
            }
            else if(prev!=NULL && prev->right==root)
            {
                prev->right = newNode;
                newNode->right = root;
            }
            else
            {
                newNode->left = root;
                head = newNode;
            }
            
            return;
        }
        else
        {
            if(!root) return;
            helper(root->left,root,val,curr+1,depth);
            helper(root->right,root,val,curr+1,depth);
            
        }
        
    }
    
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        head = root;
        helper(root,NULL,val,1,depth); //prev will be initially NULL 
        return head;
        
    }
};