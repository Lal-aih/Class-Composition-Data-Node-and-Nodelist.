#include <iostream>
#include "Node.h"
#include "NodeList.h"

using namespace std;

int main(){
	//Initiates object list of class NodeList
	NodeList list;
	//Tests the getNum function
	cout << "Current number of items in the list: " << list.getNum() << endl;
	//Asks if the user wants to add to the list
	cout << "\nWould you like to add to the list?: (Y/N)" << endl;
	char choiceAdd;
	cin >> choiceAdd;

	while (choiceAdd != 'Y' && choiceAdd != 'N'){
		cout << "\nInvalid choice, enter Y or N" << endl;
		cin >> choiceAdd;
	}

	if (choiceAdd == 'N'){
		cout << "\nContinuing." << endl;
	}

	if (choiceAdd == 'Y'){
		int dv;
		int ui;

		do{
			cout << "Identity of this item: " << endl;
			cin >> ui;
			cout << "Data value of this item: " << endl;
			cin >> dv;
			//tests the addItem function
			list.addItem(Node(ui, dv));

			cout << "Would you like to add another item? (Y/N)" << endl;
			cin >> choiceAdd;
			while (choiceAdd != 'Y' && choiceAdd != 'N'){
				cout << "Invalid choice, enter Y or N" << endl;
				cin >> choiceAdd;
			}
		}while (choiceAdd != 'N');
	}


	//tests the printNodes function
	cout << "\nThis is your list: " << endl;
	list.printNodes();

	cout << "\nCurrent number of items in the list: " << list.getNum() << endl;

	char choiceSearch;

	cout << "\nWould you like to search for an item? (Y/N)" << endl;
	cin >> choiceSearch;

	while (choiceSearch != 'Y' && choiceSearch != 'N'){
		cout << "Invalid choice, enter Y or N" << endl;
		cin >> choiceSearch;
	}

	int uiSearch;
	int dvSearch;

	while (choiceSearch == 'Y'){
	cout << "What is the identity of the item you want to search?" << endl;
	cin >> uiSearch;

	cout << "What is the value of the item you want to search for?" << endl;
	cin >> dvSearch;
	//tests the NodeCheck function
	list.NodeCheck(uiSearch, dvSearch);

	cout << "\nWould you like to search for another item?" << endl;
	cin >> choiceSearch;
	while (choiceSearch != 'Y' && choiceSearch != 'N'){
		cout << "Invalid choice, enter Y or N" << endl;
		cin >> choiceSearch;
		}
	}

	cout << "\nEnding program" << endl;
	return 0;
}
