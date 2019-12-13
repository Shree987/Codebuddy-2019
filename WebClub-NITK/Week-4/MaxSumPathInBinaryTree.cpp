/*

Name : Shreeraksha R Aithal (@Shree987)
Question: Max Sum Path in Binary Tree (https://www.interviewbit.com/problems/max-sum-path-in-binary-tree/)

Following is the required Solution function

*/

 
int MAX;

int dp(TreeNode* ptr){
    int l,r;
    if(ptr==NULL)    return 0;
    l = dp(ptr->left);
    r = dp(ptr->right);
    MAX = max(MAX, l+r+ptr->val);
    return ptr->val + max(0, max(l, r));     
}
 
int Solution::maxPathSum(TreeNode* A){
    MAX = A->val;
    dp(A);
    return MAX;
}
