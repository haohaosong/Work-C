/*
* auhtor:haohaosong
* date:2017/1/8
* note:用头插法实现逆序单链表 
*/

#include"SqlList.h"

//面试题1：头插法逆序单链表
void ReverseList(PNode* head)
{
	PNode pre = *head;
	PNode cur = NULL;
	PNode next = NULL;

	assert(head);

	if (*head == NULL || (*head)->next == NULL)
		return;

	cur = pre->next;
	pre->next = NULL;

	//每次让Cur的下一个指向Pre
	while (next = cur->next)
	{
		cur->next = pre; 
		pre = cur;
		cur = next;
	}

	//解决头和尾
	cur->next = pre;
	*head = cur;
}
