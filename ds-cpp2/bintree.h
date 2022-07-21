#pragma once

class TreeNode {
public: 
	TreeNode(int value) {
		this->value = value;
		pLeft = nullptr;
		pRight = nullptr;
	}
	int value;
	TreeNode* pLeft;
	TreeNode* pRight;
};

class bintree
{
	TreeNode* pRoot;
	void trans();
	void insert(int value);
};
