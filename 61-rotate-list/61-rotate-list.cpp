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
    void reverse(vector<int>&nums,int left,int right)
    {
        while(left<right)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k<=0) return head;
        vector<int>nums;
        ListNode*temp = head;
        while(temp!=NULL)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        
        k = k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
        
        temp = head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val = nums[i++];
            temp = temp->next;
        }
        
        return head;
        
    }
};