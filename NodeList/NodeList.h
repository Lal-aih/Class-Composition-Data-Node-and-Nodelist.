#ifndef NODELIST_H_
#define NODELIST_H_

#include <iostream>
#include "Node.h"

using namespace std;

class NodeList {
private:
	static const size_t LIST_SIZE = 500; // variable for the maximum nodes the list can hold
	Node *items; //points to a dynamically allocated array containing objects of type node
	size_t numItems; //variable for the number of items in the list
public:
	NodeList();

	NodeList(const NodeList&); //copy constructor
	//getters
	size_t getNum() const;
	Node getItem() const;
	void addItem(const Node&); // adds a node to the node list
	void printNodes(); //prints the contents of the list
	void NodeCheck(int, int); //checks if a node exists in the list


	~NodeList();
};



#endif /* NODELIST_H_ */
