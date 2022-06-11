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
    bool palindrome(vector<int>arr , int n)
    {
        int flag = 0;
        
        for(int i=0;i<=n/2 && n!=0;i++)
        {
            if(arr[i]!=arr[n-i-1])
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
        
        
        
    }
    bool isPalindrome(ListNode* head) {
        vector<int>array{};
        
        while(head!=NULL)
        {
            array.push_back(head->val);
            head = head->next;
        }
        
        int n = array.size();
        return palindrome(array,n);
    }
};