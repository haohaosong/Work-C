/*
* auhtor:haohaosong
* date:2017/1/8
* note:��ͷ�巨ʵ���������� 
*/

#include"SqlList.h"

//������1��ͷ�巨��������
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

	//ÿ����Cur����һ��ָ��Pre
	while (next = cur->next)
	{
		cur->next = pre; 
		pre = cur;
		cur = next;
	}

	//���ͷ��β
	cur->next = pre;
	*head = cur;
}
