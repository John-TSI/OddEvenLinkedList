#include"../inc/solution.hpp"


ListNode* Solution::oddEvenList(ListNode* head)
{
    if(!head || !head->next){ return head; }  // handle trivial cases: zero/one nodes in linked list
    ListNode *odds{head}, *evens{head->next}, *tmp{evens};  // 'odds'/'evens' pointers will traverse odd/even index nodes

    while(odds->next && evens->next)
    {
        odds->next = evens->next;  // connect current odd index node with next odd index node 
        odds = odds->next;  // update odds pointer

        evens->next = odds->next;  // similarly with current even index node
        evens = odds->next;
    }
    odds->next = tmp; tmp = nullptr;  // connect last odd index node with first even index node pointed to by 'tmp'
    return head;
}