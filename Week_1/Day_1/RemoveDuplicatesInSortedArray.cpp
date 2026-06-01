#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int i = 0;

        while(i<n){
            if(nums[i] == nums[k-1]){
                i++;
            }
            else{
                nums[k] = nums[i];
                k++;
            }

        }

        return k;
    }
};