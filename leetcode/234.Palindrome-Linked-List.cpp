/**
 * @file 234.Palindrome-Linked-List.cpp
 * @date 2022-11-12
 * @author Sion Han
 * @from https://leetcode.com/problems/palindrome-linked-list/
 * @time-taken N/A
 * @related 
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        queue<int> q;
        
        while (head != nullptr) {
            int& val = head->val;
            
            s.push(val);
            q.push(val);
            head = head->next;
        }
        
        while (!s.empty()) {
            if (s.top() != q.front()) {
                return false;
            }
            s.pop();
            q.pop();
        }
        return true;
    }
};