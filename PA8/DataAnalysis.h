#include "BST.h"

class DataAnalysis {
public:
	DataAnalysis() {

	};
	~DataAnalysis() {

	};
	void runAnalysis() {
		DataAnalysis run;
		run.processCSV();
		run.showTrends();
	};
private:
	BST mTreeSold;
	BST mTreePurchased;
	fstream mCsvStream;
	void openCSV() {
		this->mCsvStream.open("data.csv");
	};
	void processCSV() {
		//openCSV();
		string data = "";
		string tempUnits = "";
		int newUnits;
		string trans = "";
		this->mCsvStream.open("data.csv");
		while (!mCsvStream.eof()){
		getline(mCsvStream, tempUnits, ',');
		stringstream temp(tempUnits);
		temp >> newUnits;
		getline(mCsvStream, data, ',');
		getline(mCsvStream, trans, '\n');
		if (trans == "Purchased") {
			mTreePurchased.insertInBST(newUnits, data);
		}
		else {
			mTreeSold.insertInBST(newUnits, data);
		}
		}
		cout <<"----------Purchased---------" << endl;
		mTreePurchased.inOrderTraversal();
		cout << "-----------Sold-------------" << endl;
		mTreeSold.inOrderTraversal();
		mCsvStream.close();
	};
	void showTrends() {
		TransactionNode *pSmall = new TransactionNode();
		TransactionNode *pLarge = new TransactionNode();
		TransactionNode *sSmall = new TransactionNode();
		TransactionNode *sLarge = new TransactionNode();
		*pSmall=mTreePurchased.findSmallest(mTreePurchased.getRoot());
		*pLarge = mTreePurchased.findLargest(mTreePurchased.getRoot());
		cout << "Least type purhcased and units purchased: " << pSmall->getData() << ", " << pSmall->getUnits() << endl;
		cout << "Most type purchased and units purchased: " << pLarge->getData() << ", " << pLarge->getUnits() << endl;
		*sSmall = mTreeSold.findSmallest(mTreeSold.getRoot());
		*sLarge = mTreeSold.findLargest(mTreeSold.getRoot());
		cout << "Least type sold and units sold: " << sSmall->getData() << ", "<< sSmall->getUnits() << endl;
		cout << "Most type sold and units sold: " << sLarge->getData() << ", "<< sLarge->getUnits() << endl;

	};// display type/number of units least/most sold

};