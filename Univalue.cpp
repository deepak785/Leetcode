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
    int prev;
    bool flag=0;
    void inorder(TreeNode* curr)
    {
        if(!curr)
            return;
        inorder(curr->left);
        if(curr->val!=prev)
        {
           flag=1;
              return; 
        }
        inorder(curr->right);
        
    }
    
    bool isUnivalTree(TreeNode* root) {
      if(!root)
          return true;
        else if(!root->left && !root->right )
        {
            return true;
        }
        else
        { prev=root->val;
           inorder(root) ;
           if(flag)
                return false;
         
           else 
               return true;
            
        }
          
        
    }
};
