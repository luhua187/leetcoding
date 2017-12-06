#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) 
{
    int m = 0;
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tmp = p;

    while(l1 != NULL && l2 !=NULL)
    {
        if(l1->val < l2->val)
        {
            tmp->next = l1;
            l1 = l1->next;
        }
        else
        {
            tmp->next  = l2;
            l2 = l2->next;
        }
        tmp = tmp->next;
    }

    tmp->next = l1?l1:l2;
    return p->next;
}

int main()
{
    struct ListNode l1 = {1, NULL};
    struct ListNode l2 = {2, NULL};
    struct ListNode *p;

    p = mergeTwoLists(&l1,&l2);
	return 0;
}













