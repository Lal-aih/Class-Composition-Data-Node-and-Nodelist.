#include "Node.h"
#include "Nodelist.h"
#include <iostream>

using namespace std;

NodeList::NodeList(){
	items = new Node[LIST_SIZE]; //dynamically allocated array containing objects of type Node
	numItems = 0; //list is empty, therefore starts at 0
}

//getters
	size_t NodeList::getNum() const{
		return numItems;
	}
	Node NodeList::getItem() const{
		return *items;
	}

	void NodeList::addItem(const Node& N){ //adds an item to the list
		if (numItems < LIST_SIZE){
			items[numItems] = N;
			numItems++;
		} else {
			cout << "List is full. Can not add another item.";
		}
	}
	void NodeList::printNodes(){ //prints the contents of the list
		cout << "\nList Content: " << endl;
		for (int i=0; i<numItems ; i++){
			cout << "item " << i+1 << ": " << endl;
			items[i].PrintContents();
			cout << endl;
		}
	}
	void NodeList::NodeCheck(int I, int V){ //checks if a node exists in the list
		bool dvFound, uiFound;

		for (int i = 0; i < numItems; i++){
			if (items[i].getIdentity() == I){
				cout << "\nUnique identity " << I << " was found in item " << i+1 << endl;
				uiFound = true;
			}
			if (items[i].getData() == V){
				cout << "Data value " << V << " was found in item " << i+1 << endl;
				dvFound = true;
			}
		}

		if (!uiFound){
			cout << "\nIdentity " << I << " was not found." << endl;
		}
		if (!dvFound){
			cout << "Value " << V << " was not found" << endl;
		}
	}

NodeList::~NodeList(){
	delete[] items; //frees the memory associated with the dynamically allocated array
}
