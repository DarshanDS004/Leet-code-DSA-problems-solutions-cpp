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
string collect(ListNode* head)
{
    string res="";
    ListNode* temp=head;
    while(temp!=nullptr)
    {
        res+=to_string(temp->val);
        temp=temp->next;
    }
    return res;

}
int str_to_decimal(string str)
{
    int ans=0;
    int n=str.size();
    int i=0;
    while(i<n)
    {
       ans=ans*2+(str[i]-'0');
       i++;

    }
    return ans;
}
    int getDecimalValue(ListNode* head) {
        string res=collect(head);
        return str_to_decimal(res);


        
    }
};