//#include<iostream>
//using namespace std;
//
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        if (list1 == nullptr || list2 == nullptr)
//        {
//            return list1==nullptr?list2:list1;
//        }
//       
//        ListNode* node1 = list1;
//        ListNode* node2 = list2;
//        
//
//        ListNode* head = nullptr;
//        if (node1->val <= node2->val)
//        {
//            head = list1;
//            list1 = list1->next;
//
//        }
//        else
//        {
//
//            
//            head = list2;
//            list2 = list2->next;
//
//        }
//        ListNode* node = head;
//        while (node1!= nullptr)
//        {
//            if (list1 == nullptr && list2 != nullptr)
//            {
//                node->next = list2;
//                break;
//            }
//            else if(list1!=nullptr&&list2==nullptr)
//            {
//                node->next = list1;
//                break;
//            }
//            if (list1->val <= list2->val)
//            {
//                node->next = list1;
//                node = node->next;
//                list1 = list1->next;
//            }
//            else
//            {
//               
//
//                node->next = list2;
//                list2 = list2->next;
//                node = node->next;
//
//            }
//        }
//        return head;
//
//    }
//
//};
//
//int main()
//{
//    ListNode n1(2);
//   // ListNode n2(2);
//    //ListNode n3(4);
//    ListNode m1(1);
//    //ListNode m2(3);
//    //ListNode m3(4);
//    //n1.next = &n2;
//    //n2.next = &n3;
//    //m1.next = &m2;
//    //m2.next = &m3;
//    Solution s;
//    s.mergeTwoLists(&n1, &m1);
//
//    return 0;
//
//
//
//}
