#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    int postIndex = postorder.size() - 1;
    return cTree(inorder, postorder, 0, inorder.size() - 1, postIndex);
}

TreeNode *cTree(vector<int> &inorder, vector<int> &postorder, int is, int ie, int postIndex)
{
    if (is > ie)
        return NULL;
    TreeNode *root = new TreeNode(postorder[postIndex--]);
    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (i == root->val)
        {
            inIndex = i;
            break;
        }
    }
    root->right = cTree(inorder, postorder, inIndex + 1, ie, postIndex);
    root->left = cTree(inorder, postorder, is, inIndex - 1, postIndex);
    return root;
}

int main()
{

    return 0;
}