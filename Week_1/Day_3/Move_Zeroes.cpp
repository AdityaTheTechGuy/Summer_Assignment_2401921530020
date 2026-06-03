#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // If current element is non-zero, swap it to the front
            if (nums[i] != 0) {
                swap(nums[insertPos], nums[i]);
                insertPos++; // Move the write pointer forward
            }
        }
    }
};