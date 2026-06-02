#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currwinsum = 0;

        for(int i = 0; i<k;i++){
            currwinsum += nums[i];
        }
        double maxsum = currwinsum;

        for(int i = k; i<nums.size(); i++){
            currwinsum += nums[i] - nums[i-k];

            maxsum = max(maxsum,currwinsum);
            

        }
        return maxsum/k;
    }
};