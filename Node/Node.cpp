#include "Node.h"
#include <string>
#include <iostream>

using namespace std;

Node::Node()
	:uniqueIdentity(0), dataValue(0){} //default to 0

Node::Node(int UI, int DV)
	:uniqueIdentity(UI), dataValue(DV){}

	//setters and getters
	int Node::getIdentity() const{
		return uniqueIdentity;
	}

	void Node::setIdentity(int UI){
		uniqueIdentity = UI;
	}

	int Node::getData() const{
		return dataValue;
	}

	void Node::setData(int DV){
		dataValue = DV;
	}

	Node Node::Clone() const{ // clones the class
		Node N2;

		N2.uniqueIdentity = this->uniqueIdentity;
		N2.dataValue = this->dataValue;

		return N2;
	}

	void Node::PrintContents() const{ // prints the data value and identity
		cout << "Unique Identity: " << uniqueIdentity << endl;
		cout << "Data Value: " << dataValue << endl;
	}
