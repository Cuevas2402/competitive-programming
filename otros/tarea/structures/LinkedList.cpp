#include "LinkedList.h"


void LinkedList::add(int val){

	if(this->head == nullptr){

		this->head = new LinkedListNode(val);

	}else{

		LinkedListNode *curr = this->head;

		while(curr->next != nullptr)
			curr = curr->next;

		curr->next = new LinkedListNode(val);

	}

}

void LinkedList::del(int index){

	LinkedListNode *curr = this->head;

	if ((index+1) > len){

		return;
		
	}else if (index == 0) {

		LinkedListNode *aux = this->head;
		this->head = head->next;
		delete aux;

	}else{

		int counter = 0;

		while(counter <= index ){

			curr = curr->next;

		}

		LinkedListNode *aux = curr->next;

		curr->next = aux->next;

		delete aux;

	}

}