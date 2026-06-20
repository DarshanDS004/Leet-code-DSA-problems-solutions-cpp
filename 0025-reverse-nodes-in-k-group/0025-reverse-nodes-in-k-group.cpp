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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

            ListNode*temp=head;
            vector<int>nodes;
            while(temp!=nullptr){
                nodes.push_back(temp->val);
                temp=temp->next;
            }
            
            for(int i=0;i+k<=nodes.size();i+=k){
                reverse(nodes.begin()+i,nodes.begin()+i+k);
            }
             temp=head;

            for(int i=0;i<nodes.size();i++){
                temp->val=nodes[i];
                temp=temp->next;
            }

          return head;

    }
};
