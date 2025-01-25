#include "LinkedListNode.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class LinkedList {
	public :
		LinkedListNode *head;
		int len;
		void add(int val);
		void del(int index);
		LinkedList() : head(nullptr), len(0) {};
};

#endif