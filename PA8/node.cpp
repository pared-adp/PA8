#include "node.h"
Node::Node()
{
}
// Node constructor
Node::Node(string & newData)
{
	this->data = newData;
	this->mpLeft = nullptr;
	this->mpRight = nullptr;
}
// destructor
Node::~Node()
{
}
// getters
Node *& Node::getRightPtr()
{
	return this->mpRight;
}

Node *& Node::getLeftPtr()
{
	return this->mpLeft;
}

string & Node::getData()
{
	return this->data;
}

//setters
void Node::setRightPtr(Node * newRightPtr)
{
	this->mpRight = newRightPtr;
}

void Node::setLeftPtr(Node * newLeftPrt)
{
	this->mpLeft = newLeftPrt;
}

void Node::setData(string & newData)
{
	this->data = newData;
}

