#include "LinkedListNode.h"


void invertir(LinkedListNode **head){

	LinkedListNode *prev, *next, *curr;
	prev = nullptr;
	curr = *head;

	while(true){

		next = curr->next;
		curr->next = prev;
		prev = curr;

		if (next == nullptr)
			break;

		curr = next;
	}

	*head = curr;

	return ;

}



