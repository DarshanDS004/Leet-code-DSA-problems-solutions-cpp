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
    int pairSum(ListNode* head) {
        if(head==nullptr && head->next==nullptr)
        return 0;

        vector<int>res;
        ListNode*temp=head;
        while(temp!=nullptr){
            res.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        int max_sum=0;
        int n=res.size();
      for(int i=0;i<n/2;i++){
        sum=res[i]+res[n-1-i];
        max_sum=max(max_sum,sum);
      } 
     return max_sum;
        
    }
};