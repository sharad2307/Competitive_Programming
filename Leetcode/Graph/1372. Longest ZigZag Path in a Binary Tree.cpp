class Solution {  
    private:
    int ans = 0;
    void helper(TreeNode* root,int numNodes, int curr) 
    {
        if(root==NULL)
            return;
        
        ans = max(ans, numNodes);
        if(curr==1) //current node is right node
        {
            helper(root->right,1, 1); //Take it with current node as new root
            helper(root->left,numNodes+1,0);  //Include it in zigzagpath
        }
        else //current node is left node
        {
            helper(root->right, numNodes+1,1); //Include it in zigzagpath
            helper(root->left, 1,0); //Make current node as new root
        }
    }
public:
    int longestZigZag(TreeNode* root) {
         helper(root->right,1,1); //Traverse Right Subtree
        helper(root->left,1,0); //Traverse Left Subtree
        return ans;
    }
};