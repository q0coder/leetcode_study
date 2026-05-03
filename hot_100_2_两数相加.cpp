#define _CRT_SECURE_NO_WARNINGS
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* l3 = head;

        while (l1 != nullptr && l2 != nullptr)
        {
            int sum = l1->val + l2->val;
            if (sum >= 10)
            {
                ListNode* l = new ListNode(sum - 10);
                l3->next = l;
                l3 = l3->next;
                if (l1->next != nullptr)
                    ++l1->next->val;
                else
                {
                    ListNode* l4 = new ListNode(1);
                    l1->next = l4;
                }

            }
            else
            {
                ListNode* l = new ListNode(sum);

                l3->next = l;
                l3 = l3->next;
            }
            l1 = l1->next;
            l2 = l2->next;

        }
        if (l1 != nullptr)
        {
            ListNode* ll = l1;

            while (l1->val == 10 && l1 != nullptr)
            {
                if (l1->next != nullptr)
                    ++l1->next->val;
                else
                {
                    ListNode* l4 = new ListNode(1);
                    l1->next = l4;
                }
                l1->val = 0;
                l1 = l1->next;
            }
            l3->next = ll;
        }
        else if (l2 != nullptr)
            l3->next = l2;
        return head->next;
    }
};