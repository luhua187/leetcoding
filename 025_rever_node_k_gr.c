#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode 
{
	int val;
	struct ListNode *next;
 };

struct ListNode* reverseKGroup(struct ListNode* head, int k) 
{
    struct ListNode *p_tmp[10000];
    struct ListNode  ret, *pos = &ret;
    int i, m = 0, n = 0;

    if(k == 0)
		return head;

	ret.next = head;

    while(head)
    {
    	if(n != k)
    	{
    		p_tmp[n] = head;
    		n++;
    		head = head->next;
    	}
    	else
    	{
    		for(n = n-1; n >= 0; n--)
    		{
    			pos->next = p_tmp[n];
    			pos = p_tmp[n];
    		}
    		n = 0;
    	}
    }

    if(n  == k)
    	for(n = n-1; n >= 0; n--)
    	{
    		pos->next = p_tmp[n];
    		pos = p_tmp[n];
    	}
    else
   		for(i = 0; i < n; i++)
    	{
    		pos->next = p_tmp[i];
    		pos = p_tmp[i];
    	}	
    pos->next = NULL;
    return ret.next;
}



int main()
{
	int n = 5, a, i;
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


	p = reverseKGroup(t.next, 2);

	while(p != NULL)
	{
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");


	return 0;
}
