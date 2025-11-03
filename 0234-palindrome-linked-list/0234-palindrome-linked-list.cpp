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