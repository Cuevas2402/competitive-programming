#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H

class LinkedListNode {
	public : 
		LinkedListNode *next;
		int value;
		LinkedListNode(int v) : value(v), next(nullptr) {};
};

#endif