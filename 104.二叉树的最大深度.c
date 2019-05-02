/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    //if(root->left == NULL && root->right == NULL) return 1;
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);
    return left_depth > right_depth ? left_depth + 1 : right_depth + 1;
}



