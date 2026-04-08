//#include<iostream>
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//
//};
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        int countA = 1;
//        int countB = 1;
//        int count = 0;
//        ListNode* j = headB;
//        ListNode* i = headA;
//        ListNode* a = headA;
//        ListNode* b = headB;
//
//
//        while (a->next != NULL)
//        {
//            countA++;
//            a = a->next;
//        }
//        while (b->next != NULL)
//        {
//            countB++;
//            b = b->next;
//        }
//        if (countA > countB)
//        {
//            i = headA;
//            count = countB;
//            for (int k = 0; k < countA - countB; k++)
//            {
//                i = i->next;
//            }
//
//            j = headB;
//        }
//        else
//        {
//            j = headB;
//            count = countA;
//
//            i = headA;
//            for (int k = 0; k < countB - countA; k++)
//            {
//                j = j->next;
//            }
//
//        }
//        for (int k = 0; k < count; k++)
//        {
//            if (i == j)
//            {
//                return i;
//            }
//            else
//            {
//                i = i->next;
//                j = j->next;
//            }
//        }
//        return NULL;
//    }
//};

//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        ListNode* pa = headA;
//        ListNode* pb = headB;
//        while (pa != pb)
//        {
//            pa != NULL ? pa->next : headB;
//            pb != NULL ? pb->next : headA;
//        }
//        return pa;
//    }
//};
//
//int main()
//{
//
//}