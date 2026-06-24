#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* start = head;
        ListNode* end = head;

        if(head == NULL)return false;
        if(head->next == nullptr)return false;
        if(head->next->next == nullptr)return false;

        while(end != nullptr && end->next != nullptr){
            
            start = start->next;
            end = end->next->next;

            if(start == end)return true;
        }
        return false;

    }
};