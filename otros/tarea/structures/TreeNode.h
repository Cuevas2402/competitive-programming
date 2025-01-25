#ifndef TREENODE_H
#define TREENODE_H


class TreeNode {
	public :
		int val;
		TreeNode *right, *left;
		TreeNode(int v) : val(v), right(nullptr), left(nullptr) {};

};

#endif