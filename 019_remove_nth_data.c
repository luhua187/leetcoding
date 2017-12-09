#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode 
 {
	int val;
	struct ListNode *next;
 };

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    struct ListNode *tmp[50000], *p = head;
    int m = 0;

    while(head != NULL)
    {
    	tmp[m++]    = head;
    	head = head->next;
    }
    if(m > n)
    	tmp[m-n-1]->next = tmp[m-n]->next;
    else
    	return p->next;
    return p;
 }


int main()
{
	int n = 10, a = 2 i;
	struct ListNode t;
	struct ListNode *m = &t, *p;
	for(i = 0; i < n; i++)
	{
		p = (struct ListNode *)malloc(sizeof(struct ListNode));
		p->val  = i;
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


	p = removeNthFromEnd(t.next, a);

	while(p != NULL)
	{
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");


	return 0;
}
