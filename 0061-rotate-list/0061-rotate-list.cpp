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
    void rotate(vector<int>&arr,int k){
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
      
        ListNode*temp=head;

        vector<int>res;
        while(temp){
            res.push_back(temp->val);
            temp=temp->next;
        }
         int n=res.size();
         k=k%n;
        rotate(res,k);
        temp=head;
        for(int i=0;i<res.size();i++){
            temp->val=res[i];
            temp=temp->next;
        }

        return head;
        
    }
};