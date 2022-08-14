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
    
    ListNode*reverse(ListNode*head)
    {
        ListNode*p = head;
        ListNode*q = NULL;
        ListNode*r = NULL;
        
        while(p!=NULL)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        
        head = q;
        
        return head;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode*temp1 = reverse(l1);
        ListNode*temp2 = reverse(l2);
        ListNode* dummy=new ListNode(0);
        ListNode *temp=dummy;
        int sum = 0 ,c;
        
        while(temp1!=NULL || temp2!=NULL || c)
        {
            sum = 0;
            if(temp1!=NULL)
            {
                sum += temp1->val;
                temp1 = temp1->next;
            }
             if(temp2!=NULL)
            {
                sum += temp2->val;
                temp2 = temp2->next;
            }
            
            sum += c;
            c = sum/10;
            ListNode*node = new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        
        return reverse(dummy->next);
        
    }
};