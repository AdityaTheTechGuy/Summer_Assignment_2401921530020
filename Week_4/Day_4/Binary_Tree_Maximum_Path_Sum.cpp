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
    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        gainSum(root, max_sum);
        return max_sum;
    }

private:
    int gainSum(TreeNode* node, int& max_sum) {
        if (!node) return 0;
        
        // Ignore negative paths by mapping to 0
        int leftGain = max(0, gainSum(node->left, max_sum));
        int rightGain = max(0, gainSum(node->right, max_sum));
        
        // Price of a complete turning path at the current node
        int currentPathSum = node->val + leftGain + rightGain;
        max_sum = max(max_sum, currentPathSum);
        
        // Return max branch gain for parent nodes to build upon
        return node->val + max(leftGain, rightGain);
    }
};