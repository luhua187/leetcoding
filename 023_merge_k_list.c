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

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) 
{
    struct ListNode* p = NULL;
    int i = 2;

    switch(listsSize)
    {
    	case 0:
    		return NULL;
    	case 1:
    		return lists[0];
    	case 2:
    		return mergeTwoLists(lists[0], lists[1]);
    }

    p = mergeTwoLists(lists[0], lists[1]);

    for(i = 2; i < listsSize; i++)
    	p = mergeTwoLists(p, lists[i]);

    return p;
}





int main()
{
	int n = 6, a, i;
	struct ListNode t;
	struct ListNode *m = &t, *p;
	for(i = 0; i < n; i++)
	{
		p = (struct ListNode *)malloc(sizeof(struct ListNode));
		p->val  = i+1;
		p->next = NULL;
		m->next = p;
		m = p;
	}
	m = t.next;
	while(m != NULL)
	{
		printf("%d ", m->val);
		m = m->next;
	}
	printf("\n");


	p = mergeKLists(&(t.next), 1);

	while(p != NULL)
	{
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");


	return 0;
}
