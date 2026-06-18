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
    int find(vector<int>& preorder, vector<int>& inorder,int min ,int &idx,int max){
        int k=preorder[idx];
        for(int i=min;i<=max;i++){
            if(inorder[i]==k) return i;
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int min, int &idx, int max){
        if(min>max) return NULL;
        TreeNode* root=new TreeNode(preorder[idx]);
        int i=find(preorder,inorder,min,idx,max);
        idx++;
        root->left=helper(preorder,inorder,min,idx,i-1);
        root->right=helper(preorder,inorder,i+1,idx,max);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx=0;
        return helper(preorder,inorder,0,idx,preorder.size()-1);
    }
};
