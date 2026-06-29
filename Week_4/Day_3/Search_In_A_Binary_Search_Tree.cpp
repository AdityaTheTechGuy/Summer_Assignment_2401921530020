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
    TreeNode* searchBST(TreeNode* root, int val) {
        // Base cases: root is null or key is present at root
        if (!root || root->val == val) return root;
        
        // Value is greater than root's value
        if (root->val < val) return searchBST(root->right, val);
        
        // Value is smaller than root's value
        return searchBST(root->left, val);
    }
};