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
    TreeNode* helper(TreeNode* Node){
        if(!Node->left) return Node->right;
        if(!Node->right) return Node->left;

        TreeNode* rightsub=Node->right;
        TreeNode* lastvalueofleftsubtree = rightnode(Node->left);
        lastvalueofleftsubtree->right=rightsub;

        return Node->left;

    }
    TreeNode* rightnode(TreeNode* Node){
        while(Node->right){
            Node=Node->right;
        }
        return Node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val==key) return helper(root);
        TreeNode* cur=root;
        while(cur){
            if(cur->val>key){
                if(cur->left && cur->left->val==key){

                    TreeNode* tar =cur->left;;
                    cur->left=helper(tar);
                    delete tar;
                    break;
                    
                }
                else{
                    cur=cur->left;
                }
            }
            else{
                if(cur->right && cur->right->val==key){
                    TreeNode* tar=cur->right;
                    cur->right=helper(tar);
                    delete tar;
                    break;
                }
                else{
                    cur=cur->right;
                }
            }
        }
        return root;
    }
};