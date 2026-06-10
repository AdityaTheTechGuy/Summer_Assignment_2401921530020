#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string internal_str = doubled.substr(1, doubled.length() - 2);
        
        return internal_str.find(s) != string::npos;
    }
};