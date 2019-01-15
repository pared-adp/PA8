#include "TransactionNode.h"

TransactionNode::TransactionNode() : Node()
{

}

TransactionNode::TransactionNode(string newData, int newUnits) : Node (newData)
{
	this->mUnits = newUnits;
}

TransactionNode::~TransactionNode()
{
}
//getter
int TransactionNode::getUnits()
{
	return this->mUnits;
}

void TransactionNode::setUnits(int newUnits)
{
	this->mUnits = newUnits;
}

void TransactionNode::printData()
{
	cout << "Data: " << this->data << endl;
	cout << "Units: " << this->mUnits << endl;
}

