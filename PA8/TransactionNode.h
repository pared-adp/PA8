#include "node.h"

class TransactionNode: public Node {
public:
	TransactionNode();
	TransactionNode(string newData, int newUnits);
	~TransactionNode();
	//getters
	int getUnits();
	//setters
	void setUnits(int newUnits);
	// member functions 
	void printData();
private:
	int mUnits;
};