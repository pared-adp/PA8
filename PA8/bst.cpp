#include "BST.h"
// destructor
void BST::destroyer(Node *pRoot) {
	if (pRoot != nullptr) {
		destroyer(pRoot->getLeftPtr());
		destroyer(pRoot->getRightPtr());
		delete(pRoot);
	}
}
BST::~BST()
{
	destroyer(mpRoot);
}
// TODO: insert return statement here

TransactionNode & BST::findSmallest(Node *&pRoot)
{
	Node *temp = pRoot;
	while (temp->getLeftPtr() != nullptr) {
		temp = temp->getLeftPtr();
	}
	TransactionNode *returnData = (TransactionNode*)temp;
	return *returnData;
}
TransactionNode & BST::findLargest(Node *&pRoot)
{
	Node *temp = pRoot;
	while (temp->getRightPtr() != nullptr) {
		temp = temp->getRightPtr();
	}
	TransactionNode *returnData = (TransactionNode*)temp;
	return *returnData;
}
// constructor
BST::BST()
{
	this->mpRoot = nullptr;
}

// public print function
void BST::inOrderTraversal()
{
	inOrderTraversal(this->mpRoot);
}

void BST::inOrderTraversal(Node *root) {
	TransactionNode *temp = (TransactionNode*)root;
	if (temp != nullptr) {
		inOrderTraversal(temp->getLeftPtr());
		temp->printData();
		inOrderTraversal(temp->getRightPtr());
	}
}
// public insert
void BST::insertInBST(int newUnits, string newData)
{
	insertInBST(this->mpRoot, newData, newUnits);
}
// getter
Node *& BST::getRoot() 
{
	return this->mpRoot;
}
// private make node
TransactionNode * BST::makeNode(string newData, int newUnits)
{
	TransactionNode *newNode = nullptr;
	newNode = new TransactionNode(newData, newUnits);
	return newNode;
}
// private insert
void BST::insertInBST(Node *&pTree, string newData, int newUnits)
{
	TransactionNode* temp = makeNode(newData, newUnits);
	TransactionNode* root = (TransactionNode*)pTree;
	if (pTree == nullptr) {
		pTree = temp;
	}
	else {
		if (newUnits < root->getUnits()) {
			insertInBST(pTree->getLeftPtr(), newData, newUnits);
		}
		else {
			insertInBST(pTree->getRightPtr(), newData, newUnits);
		}
	}
}



