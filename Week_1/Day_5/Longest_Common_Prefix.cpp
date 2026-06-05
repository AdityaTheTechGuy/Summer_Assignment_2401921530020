#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Loop through characters of the first string
        for (int i = 0; i < strs[0].length(); i++) {
            char currChar = strs[0][i];
            
            // Compare this character with the same position in all other strings
            for (int j = 1; j < strs.size(); j++) {
                // Return if string is shorter or character mismatches
                if (i == strs[j].length() || strs[j][i] != currChar) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        return strs[0];
    }
};