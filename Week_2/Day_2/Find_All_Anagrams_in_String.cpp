#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.length() < p.length()) return result;
        
        int count[26] = {0};
        for (char c : p) count[c - 'a']++;
        
        int left = 0, right = 0, required = p.length();
        
        while (right < s.length()) {
            
            if (count[s[right] - 'a'] > 0) {
                required--;
            }
            count[s[right] - 'a']--;
            right++;
            
            if (required == 0) {
                result.push_back(left);
            }
            
            if (right - left == p.length()) {
                if (count[s[left] - 'a'] >= 0) {
                    required++;
                }
                count[s[left] - 'a']++;
                left++;
            }
        }
        return result;
    }
};