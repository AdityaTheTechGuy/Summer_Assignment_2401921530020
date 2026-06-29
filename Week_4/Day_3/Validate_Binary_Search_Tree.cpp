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
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
    
private:
    bool validate(TreeNode* node, long long minVal, long long maxVal) {
        if (!node) return true;
        
        // Current node value must strictly fall inside the inherited bounds
        if (node->val <= minVal || node->val >= maxVal) return false;
        
        // Left child max bound becomes current node value
        // Right child min bound becomes current node value
        return validate(node->left, minVal, node->val) && 
               validate(node->right, node->val, maxVal);
    }
};