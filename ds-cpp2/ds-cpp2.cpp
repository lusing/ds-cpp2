// ds-cpp2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "bintree.h"

struct ListNode {
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(nullptr) {
	}
};

class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL) {
			return pHead;
		}
		ListNode* pResult = NULL;
		ListNode* pCurrent = pHead;
		for (;;) {
			if (pCurrent == NULL) {
				break;
			}
			else {
				ListNode* pTemp = pCurrent;
				pCurrent = pCurrent->next;
				pTemp->next = NULL;
				if (pTemp == NULL) {
					break;
				}
				else {
					std::cout << "Before insert:" << pTemp->val << std::endl;
					pResult = insertNode(pResult, pTemp);
				}
			}
			//pCurrent = pCurrent->next;
		}
		return pResult;
	}

	static ListNode* deleteNode(ListNode* pHead) {
		if (pHead == NULL) {
			return NULL;
		}
		else {
			ListNode* pTemp = pHead;
			pHead = pHead->next;
			pTemp->next = NULL;
			return pTemp;
		}
	}

	static ListNode* insertNode(ListNode* pHead, ListNode* pNode) {
		ListNode* pThis = pHead;
		if (pThis == NULL) {
			return pNode;
		}
		pNode->next = pHead;
		pHead = pNode;
		return pHead;
	}

	static void printNode(ListNode* pHead) {
		if (pHead == NULL) {
			return;
		}
		ListNode* pThis = pHead;
		while (pThis != NULL) {
			std::cout << pThis->val << std::endl;;
			pThis = pThis->next;
		}
		std::cout << std::endl;
	}

};

int main()
{
	std::cout << "Hello World!\n";

	ListNode* node1 = new ListNode(1);
	ListNode* pHead = NULL;

	pHead = Solution::insertNode(pHead, node1);
	Solution::printNode(pHead);

	ListNode* node2 = new ListNode(2);

	pHead = Solution::insertNode(pHead, node2);
	Solution::printNode(pHead);

	ListNode* node3 = new ListNode(3);

	pHead = Solution::insertNode(pHead, node3);
	Solution::printNode(pHead);

	auto pSolution = new Solution();

	ListNode* pHead2 = pSolution->ReverseList(pHead);
	Solution::printNode(pHead2);

	auto pBinTree = new bintree();
	pBinTree->insert(1);
	pBinTree->insert(10);
	pBinTree->insert(5);
	pBinTree->trans();
	std::cout << pBinTree->find(10);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
