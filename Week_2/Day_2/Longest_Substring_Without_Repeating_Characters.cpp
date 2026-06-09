#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> ans;
        int p = 0;

        int left = 0, right = 0;

        while (right < s.length()) {

            if (ans.find(s[right]) != ans.end() && ans[s[right]] >= left) {
                    left = ans[s[right]] + 1;
            } else {
                ans[s[right]] = right;
                p = max(p, right-left+1);
                right++;
            }
        }
        return p;
    }
};