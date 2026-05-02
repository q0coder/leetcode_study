#define _CRT_SECURE_NO_WARNINGS
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode  head_;
    head_.next = head;

    struct ListNode* p = &head_;
    struct ListNode* q = &head_;



    for (int i = 0; i < n; i++)
    {


        p = p->next;
    }


    while (p->next != NULL)
    {
        p = p->next;
        q = q->next;
    }






    p = q->next;
    q->next = q->next->next;

    free(p);

    return head_.next;
}