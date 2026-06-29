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
    int maxDiameter = 0;
    
    int calculateHeight(TreeNode* root) {
        if (!root) return 0;
        int leftH = calculateHeight(root->left);
        int rightH = calculateHeight(root->right);
        
        maxDiameter = max(maxDiameter, leftH + rightH);
        return 1 + max(leftH, rightH);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        calculateHeight(root);
        return maxDiameter;
    }
};