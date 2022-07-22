#include "bintree.h"
#include <iostream>

void trans1(TreeNode* pnode) {
	if (pnode->pLeft != nullptr) {
		trans1(pnode->pLeft);
	}
	std::cout << pnode->value << ' ';
	if (pnode->pRight != nullptr) {
		trans1(pnode->pRight);
	}
}

void bintree::trans() {
	trans1(this->pRoot);
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

int search(TreeNode* pnode, int value) {
	if (pnode->value == value) {
		return value;
	}
	if (value > pnode->value) {
		if (pnode->pRight == nullptr) {
			return -1;
		}
		else {
			return search(pnode->pRight,value);
		}
	}
	else {
		if (pnode->pLeft == nullptr) {
			return -1;
		}
		else {
			return search(pnode->pLeft,value);
		}
	}
}

int bintree::find(int value) {
	return search(this->pRoot, value);
}

void erase(TreeNode* pnode, int value) {
		if (pnode->value == value) {
			
		}
		if (value > pnode->value) {
			search(pnode->pRight, value);
			
		}
		else {
			search(pnode->pLeft, value);
		}
}

int bintree::del(int value) {
	if (search(this->pRoot, value) == -1) {
		return -1;
	}
	else {

	}
}