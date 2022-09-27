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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next==NULL) return NULL;
        ListNode*temp = new ListNode(0);
        temp->next = head;
        ListNode*dummyhead = head;
        
        ListNode*slow = head;
        ListNode*fast = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            temp = temp->next;
        }
        
        temp->next = slow->next;
        
        return dummyhead;
        
        
        
    }
};