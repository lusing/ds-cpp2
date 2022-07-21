#include "bintree.h"

void bintree::trans() {

}

void insertNode(TreeNode* pnode, int value) {
	if (value > pnode->value) {
		if (pnode->pRight == nullptr) {
			pnode->pRight = new TreeNode(value);
		}
		else {
			insertNode(pnode->pRight, value);
		}
	}
	else {
		if (pnode->pLeft == nullptr) {
			pnode->pLeft = new TreeNode(value);
		}
		else {
			insertNode(pnode->pLeft, value);
		}
	}
}

void bintree::insert(int value) {
	if (this->pRoot == nullptr) {
		this->pRoot = new TreeNode(value);
	}
	else {
		insertNode(this->pRoot, value);
	}
}
