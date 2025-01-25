#include "TreeNode.h"
#include <iostream>
#include <queue>

using namespace std;


void inorden(TreeNode *node){

	if(node == nullptr)
		return;

	inorden(node->left);
	cout << node->val << " ";
	inorden(node->right);

}

int height(TreeNode *head){

	int cont = 0;

	if(head == nullptr) return cont;

	queue<TreeNode*> q;

	q.push(head);

	while(!q.empty()){

		queue<TreeNode*> aux;

		while(!q.empty()){
			if(q.front()->left != nullptr)
				aux.push(q.front()->left);

			if(q.front()->right != nullptr)
				aux.push(q.front()->right);
			
			q.pop();

		}

		q = aux;
		cont++;

	}

	return cont;

}