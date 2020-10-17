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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *cur = headB;
        ListNode *ans = nullptr;
        while(cur){
            cur->val = -cur->val;
            cur = cur->next;
        }
        cur = headA;
        while(cur){
            if(cur->val < 0){
                ans = cur;
                break;
            }
            cur = cur->next;
        }
        cur = headB;
        while(cur){
            cur->val = -cur->val;
            cur = cur->next;
        }
        return ans;
    }
};
