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
    void reorderList(ListNode* head) {
      if(head==nullptr ||head->next==nullptr)
      return;

      vector<ListNode*>arr;
      ListNode*temp=head;
      while(temp){
        arr.push_back(temp);
        temp=temp->next;
      }
        int n=arr.size();
        int i=0;
        int j=n-1;
        ListNode*prev=nullptr;
        while(i<j){
          
          arr[i]->next=arr[j];
          i++;

          if(i>=j)
          break;

          arr[j]->next=arr[i];
          j--;
        }
        arr[i]->next=nullptr;
    
    }
};