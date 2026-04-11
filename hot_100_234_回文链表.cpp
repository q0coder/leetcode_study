//#include<iostream>
//#include<unordered_map>
//#include<vector>
//#include<forward_list>
//using namespace std;
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
//
//public:
//    bool isPalindrome(ListNode* head) {
//        if (head->next == nullptr)
//        {
//            return true;
//        }
//        ListNode* fast = head;
//        ListNode* slow = head;
//        ListNode* mid = nullptr;
//        while (fast != nullptr && fast->next != nullptr)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        if (fast == nullptr)
//        {
//            mid = slow;
//        }
//        else
//        {
//            mid = slow->next;
//        }
//        ListNode* pre = nullptr;
//        ListNode* cur = mid;
//        while (cur != nullptr)
//        {
//            ListNode* temp = cur->next;
//            cur->next = pre;
//
//            pre = cur;
//            cur = temp;
//
//        }
//
//        while (pre != nullptr)
//        {
//            if (head->val != pre->val)
//            {
//                return false;
//            }
//            pre = pre->next;
//            head = head->next;
//
//        }
//        return true;
//
//    }
//};
//int main()
//{
//
//}
