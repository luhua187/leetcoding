#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
	struct ListNode pre = {0, NULL};
	struct ListNode *p = &pre, *tmp;
	int extra = 0, sum;

	while(l1 || l2 || extra)
	{
		sum = (l1? l1->val:0) + (l2? l2->val:0) + extra;
		extra = sum/10;
		tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
		tmp->val = sum%10;
		p->next = tmp;
		p = p->next;

		l1 = l1? l1->next:l1;
		l2 = l2? l2->next:l2;
	}
	return pre.next;
}



