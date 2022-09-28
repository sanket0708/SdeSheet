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
    ListNode* sortList(ListNode* head) {
        
        ListNode*dummy = new ListNode();
        ListNode*temp = dummy;
        
        vector<int>ans;
        while(head!=NULL)
        {
            ans.push_back(head->val);
            head = head->next;
        }
        
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size();i++)
        {
            ListNode* temp2 = new ListNode(ans[i]);
            temp->next = temp2;
            temp = temp->next;
        }
        
        return dummy->next;
    }
};