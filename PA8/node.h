#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Node {
public:
	// constructor
	Node();
	Node(string &newData);
	//destructor
	virtual ~Node();
	//getters
	Node *& getRightPtr();
	Node *& getLeftPtr();
	string & getData();
	// setters
	void setRightPtr(Node *newRightPtr);
	void setLeftPtr(Node *newLeftPrt);
	void setData(string &newData);

	// pure virutal member function
	virtual void printData() = 0;
protected:
	string data;
	Node *mpLeft;
	Node *mpRight;

};