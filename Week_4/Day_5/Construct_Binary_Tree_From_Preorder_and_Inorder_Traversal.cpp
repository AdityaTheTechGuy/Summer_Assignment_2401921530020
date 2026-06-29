#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        int preIdx = 0;
        return splitTree(preorder, inMap, preIdx, 0, inorder.size() - 1);
    }

private:
    TreeNode* splitTree(vector<int>& preorder, unordered_map<int, int>& inMap, int& preIdx, int inStart, int inEnd) {
        if (inStart > inEnd) return nullptr;
        
        int rootVal = preorder[preIdx++];
        TreeNode* root = new TreeNode(rootVal);
        int rootInIdx = inMap[rootVal];
        
        root->left = splitTree(preorder, inMap, preIdx, inStart, rootInIdx - 1);
        root->right = splitTree(preorder, inMap, preIdx, rootInIdx + 1, inEnd);
        
        return root;
    }
};