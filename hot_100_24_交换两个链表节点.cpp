#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // 1. 创建一个虚拟头节点，指向真正的头节点
        // 这样可以统一处理头节点交换的情况
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        // 2. 定义一个指针 temp，初始指向虚拟头节点
        ListNode* temp = dummyHead;

        // 3. 循环条件：后面至少还有两个节点才能交换
        while (temp->next != nullptr && temp->next->next != nullptr) {
            // 定义需要交换的两个节点
            ListNode* node1 = temp->next;
            ListNode* node2 = temp->next->next;

            // 4. 开始交换逻辑 (三步走)
            // 第一步：node1 指向 node2 的下一个节点 (断开 1->2，连接 1->3)
            node1->next = node2->next;

            // 第二步：node2 指向 node1 (断开 2->3，连接 2->1)
            node2->next = node1;

            // 第三步：temp 指向 node2 (断开 temp->1，连接 temp->2)
            temp->next = node2;

            // 5. 移动 temp 指针，准备下一轮交换
            // 此时 temp 应该移动到 node1 (因为 node1 现在在后面了)
            temp = node1;
        }

        // 6. 获取结果并释放虚拟头节点内存
        ListNode* result = dummyHead->next;
        
        return result;
    }
};