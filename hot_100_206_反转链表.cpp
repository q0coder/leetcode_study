#include<iostream>
using namespace std;
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//
////Ë«Ñ­»·
////class Solution {
////public:
////    ListNode* reverseList(ListNode* head) {
////        if (head == nullptr || head->next == nullptr)
////        {
////            return head;
////        }
////        ListNode* node = head;
////        int count = 0;
////        while (head != nullptr)
////        {
////            head = head->next;
////            count++;
////        }
////        head = node;
////        for (int i = 0; i < count - 1; i++) {
////            node = head;
////            for (int j = 0; j < count - i - 1; j++) {
////                int temp = node->val;
////                node->val = node->next->val;
////                node->next->val = temp;
////                node = node->next;
////            }
////        }
////        return head;
////    }
////};
//
//
////µÝ¹é
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head)
//    {
//
//        ListNode* pre = nullptr;
//        ListNode* cur = head;
//        return reverseList(cur, pre);
//
//    }
//    ListNode* reverseList(ListNode* cur, ListNode* pre)
//    {
//        if (cur == nullptr)
//        {
//            return pre;
//        }
//
//        ListNode* nextTemp = cur->next;
//        cur->next = pre;
//        return reverseList(nextTemp, cur);
//
//    }
//};
//
////·ÇµÝ¹é
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* pre = nullptr;
//        ListNode* cur = head;
//        while (cur != nullptr)
//        {
//
//            ListNode* nextTemp = cur->next;
//            cur->next = pre;
//            pre = cur;
//            cur = nextTemp;
//
//        }
//        head = pre;
//        return head;
//    }
//};
//
//
//int main()
//{
//
//}