#include <iostream>
#include "Node.h"

using namespace std;

int main(){
	int Identity; //value for the unique identity
	int Value; //value for the data value

	//prompts the user to enter the identity and value
	cout << "Give a unique identity" << endl;
	cin >> Identity;

	cout << "Give a data value" << endl;
	cin >> Value;

	const Node N1(Identity, Value); //creates the object N1

	const Node N2 = N1.Clone(); //create the object N2 by cloning N1

	//prints the contents of both objects
	cout << "Contents of first node:" << endl;
	N1.PrintContents();

	cout << "\nContents of the cloned node: " << endl;
	N2.PrintContents();
	return 0;
}
