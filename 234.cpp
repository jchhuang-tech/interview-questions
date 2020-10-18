// reverse linked list approach O(1) space
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
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast){
            if(fast->next){
                fast = fast->next->next;
            }else{
                fast = fast->next;
            }
            slow = slow->next;
        }
        fast = head;
        slow = reverse(slow);
        while(slow){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head){
        ListNode* cur = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};


// stack approach O(n) space
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
        ListNode* cur = head;
        int n = 0;
        while(cur){
            n++;
            cur = cur->next;
        }
        stack<int> s;
        cur = head;
        if(n%2!=0){
            for(int i=0; i<n/2; i++){
                s.push(cur->val);
                cur = cur->next;
            }
            cur = cur->next;
            for(int i=n/2+1; i<n; i++){
                if(cur->val != s.top()){
                    return false;
                } else {
                    s.pop();
                    cur = cur->next;
                }
            }
            return s.empty();
        } else {
            for(int i=0; i<n/2; i++){
                s.push(cur->val);
                cur = cur->next;
            }
            for(int i=n/2; i<n; i++){
                if(cur->val != s.top()){
                    return false;
                } else {
                    s.pop();
                    cur = cur->next;
                }
            }
            return s.empty();
        }
    }
};
