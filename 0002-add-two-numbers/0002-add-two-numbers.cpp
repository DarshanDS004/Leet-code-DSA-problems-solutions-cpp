class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr && l2 == nullptr) return nullptr;

        string str1, str2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while (temp1 != nullptr) {
            str1 = to_string(temp1->val) + str1;
            temp1 = temp1->next;
        }

        while (temp2 != nullptr) {
            str2 = to_string(temp2->val) + str2;
            temp2 = temp2->next;
        }

        if (str1.size() < str2.size()) swap(str1, str2);

        int n1 = str1.size();
        int n2 = str2.size();
        string result = "";
        int carry = 0;

        for (int i = 0; i < n1; i++) {
            int d1 = str1[n1 - 1 - i] - '0';
            int d2 = (i < n2) ? str2[n2 - 1 - i] - '0' : 0;
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
        }

        if (carry) result += '1';

        ListNode* dummy = new ListNode(0);
        ListNode* node = dummy;
        for (int i = 0; i < result.size(); i++) {
            int digit = result[i] - '0';
            node->next = new ListNode(digit);
            node = node->next;
        }

        return dummy->next;
    }
};
