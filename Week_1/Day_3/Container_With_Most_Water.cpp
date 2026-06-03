#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Calculate width between boundaries
            int width = right - left;
            
            // Find limiting height and calculate current area
            int current_height = min(height[left], height[right]);
            int current_area = current_height * width;
            
            // Track the maximum area seen so far
            max_water = max(max_water, current_area);
            
            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};