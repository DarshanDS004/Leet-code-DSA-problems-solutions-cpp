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

 /*
class Solution {
public:
string convert_to_str(ListNode* head)
{
    string res="";
    ListNode* curr=head;
    while(curr!=nullptr)
    {
        res +=to_string(curr->val);
        curr=curr->next;
    }
    return res;

}

bool is_palindrome(string str)
{
    int n=str.size();
    int low=0,high=n-1;
    while(low<=high)
    {
        if(str[low]!=str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
    bool isPalindrome(ListNode* head) {
        string res=convert_to_str(head);
        return is_palindrome(res);
        
    }
};


*/

class Solution {
public:
ListNode* find_middle(ListNode* head)
{
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

ListNode *reverse_list(ListNode*head)
{
    ListNode*prev=NULL;
    ListNode*curr=head;
    ListNode*next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;
}

  bool is_same(ListNode* mid ,ListNode* sec_mid)
  {
    while(sec_mid)
    {
        if(sec_mid->val!=mid->val)
        {
            return false;
        }
        sec_mid=sec_mid->next;
        mid=mid->next;

    }
    return true;
  }



 bool isPalindrome(ListNode* head) {
    if(! head ||! head->next)
    {
        return true;
    }
      ListNode*middle=find_middle( head);
      ListNode*sec_half=reverse_list(middle);
      bool res=is_same(head,sec_half);
      //reverse_list(sec_half);
      return res;


   


  }
};


