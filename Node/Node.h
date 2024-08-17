#ifndef NODE_H_
#define NODE_H_

#include <string>

using namespace std;

class Node{
private:
	int uniqueIdentity; //Holds the unique Identity variable
	int dataValue; //Holds the data value
public:
	Node(); //constructors
	Node(int UI, int DV);

	//setters and getters
	int getIdentity() const;
	void setIdentity(int UI);
	int getData() const;
	void setData(int DV);
	Node Clone() const; // cloning function
	void PrintContents() const; // prints the identity and value
};



#endif /* NODE_H_ */
