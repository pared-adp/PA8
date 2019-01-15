#include "TransactionNode.h"

using namespace std;

class BST {
public:
	// constructor
	BST();
	// deconstructor
	~BST();
	TransactionNode &findSmallest(Node *&pRoot);
	TransactionNode &findLargest(Node *&pRoot);
	void inOrderTraversal();
	void insertInBST(int newUnits, string newData);
	// getter
	Node *&getRoot();

private:
	Node *mpRoot;
	// private functions
	TransactionNode *makeNode(string newData, int newUnits);
	void insertInBST(Node *&pTree, string newData, int newUnits);
	void destroyer(Node *root);
	void inOrderTraversal(Node *root);
	//TransactionNode *& searchTree(Node *&pRoot, int units);
};
