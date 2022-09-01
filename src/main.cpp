// https://leetcode.com/problems/odd-even-linked-list/

#include<iostream>
#include"../inc/solution.hpp"


void PrintLinkedList(ListNode* head)
{
	while(head)
	{
		std::cout << head->val << ' ';
		head = head->next; 
	}
	std::cout << '\n';
}

int main()
{
	ListNode n5(5);
	ListNode n4(4,&n5);
	ListNode n3(3,&n4);
	ListNode n2(2,&n3);
	ListNode head(1,&n2);

	ListNode m4(4);
	ListNode m3(3,&m4);
	ListNode m2(2,&m3);
	ListNode head2(1,&m2);

	PrintLinkedList(Solution().oddEvenList(&head));  // 1 3 5 2 4
	PrintLinkedList(Solution().oddEvenList(&head2));  // 1 3 2 4

	return 0;
}

