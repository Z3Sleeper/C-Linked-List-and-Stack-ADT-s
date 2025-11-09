/******************************************************************

CIS 22C

Lab 2: This program demonstrates the abilities of Linked List ADT
and Stack ADT with the help of lab one's files. Types such as
double, string, and class objects were shown.

Authors: Alexandria Liu
Stuart James Granville

Date: 4/25/19

*******************************************************************/

#include "Currency.h"
#include "StackADT.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char choice;
	char action;
	char decision;
	double valueDouble;
	int valueInt;
	string valueString;
	Dollar cDollar;
	DynStackNode<double> stackDouble;
	DynStackNode<string> stackString;
	DynStackNode<Currency> stackCurrency;
	LinkedList<double> doubleList;
	LinkedList<string> stringList;
	LinkedList<Dollar> dollarList;

	do {
		cout << "Hello user! Enter:\na: Double Stack\nb: String Stack\nc: Currency Stack\nd: Double Linked List\ne: String Linked List\nf: Dollar Linked List\nq: Quit\n\nChoose an option: ";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case'a': //double stack
			do {
				cout << "\nCategory: Double Stack. \nEnter:\na: Push\nb: Pop\nc: Print the top of the stack\nd: Get the size\ne: Check if the stack is empty\nq: Quit\n\nChoose an option: ";
				cin >> action;
				switch (action) {
				case 'a': //push
					cout << "\nEnter the number" << endl;
					cin >> valueDouble;
					stackDouble.push(valueDouble);
					cout << "\n" << valueDouble << " was added to the top of the stack" << endl << endl;
					break;
				case 'b': //pop
					stackDouble.pop();
					break;
				case 'c': //top value
					if (stackDouble.isEmpty()) {
						cout << "The stack is empty. There is no 'top' value" << endl;
					}
					else {
						cout << "The top of the stack value is " << stackDouble.topVal() << endl;
					}
					break;
				case 'd': //size
					cout << "The size of the stack: " << stackDouble.size() << endl;
					break;
				case 'e': //status
					if (stackDouble.isEmpty()) {
						cout << "The stack is empty" << endl;
					}
					else {
						cout << "The stack is not empty" << endl;
					}
					break;
				case 'q': cout << endl; //quit
					break;
				default:
					cout << "You didn't not select one of the options." << endl << endl;
					break;
				}
			} while (action != 'q');
			break;
		case'b': //string stack
			do {
				cout << "\nCategory: String Stack. \nEnter:\na: Push\nb: Pop\nc: Print the top of the stack\nd: Get the size\ne: Check if the stack is empty\nq: Quit\n\nChoose an option: ";
				cin >> action;
				switch (action) {
				case 'a': //push
					cout << "\nEnter the string name" << endl;
					cin >> valueString;
					stackString.push(valueString);
					cout << "\n" << valueString << " was added to the top of the stack" << endl << endl;
					break;
				case 'b': //pop
					stackString.pop();
					break;
				case 'c': //top value
					if (stackDouble.isEmpty()) {
						cout << "The stack is empty. There is no 'top' value" << endl;
					}
					else {
						cout << "The top of the stack value is " << stackString.topVal() << endl;
					}
					break;
				case 'd': //size
					cout << "The size of the stack: " << stackString.size() << endl;
					break;
				case 'e': //status
					if (stackString.isEmpty()) {
						cout << "The stack is empty" << endl;
					}
					else {
						cout << "The stack is not empty" << endl;
					}
					break;
				case 'q': cout << endl; //quit
					break;
				default:
					cout << "You didn't not select one of the options." << endl << endl;
					break;
				}
			} while (action != 'q');
			break;
		case'c': //Dollar Class stack
			do {
				cout << "\nCategory: Currency(Dollar) Stack. \nEnter:\na: Push\nb: Pop\nc: Print the top of the stack\nd: Get the size\ne: Check if the stack is empty\nq: Quit\n\nChoose an option: ";
				cin >> action;
				switch (action) {
				case 'a': //push
					cout << "\nEnter the value you would like to add to the Dollar stack (example: 4.18)" << endl;
					cin >> valueDouble;
					cDollar.setByTotal(valueDouble);
					stackCurrency.push(cDollar);
					cout << "\n" << cDollar.getTotal() << " was added to the top of the stack" << endl << endl;
					break;
				case 'b': //pop
					stackCurrency.pop();
					break;
				case 'c': //top value
					if (stackCurrency.isEmpty()) {
						cout << "The stack is empty. There is no 'top' value" << endl;
					}
					else {
						cout << "Top of the stack value: " << stackCurrency.topVal().getNote() << ", " << stackCurrency.topVal().getWP() << ", " << stackCurrency.topVal().getFP() << ", " << stackCurrency.topVal().getCoin() << endl;
					}
					break;
				case 'd': //size
					cout << "Stack Size: " << stackCurrency.size() << endl;
					break;
				case 'e': //status
					if (stackCurrency.isEmpty()) {
						cout << "The stack is empty" << endl;
					}
					else {
						cout << "The stack is not empty" << endl;
					}
					break;
				case 'q': cout << endl; //quit
					break;
				default:
					cout << "You didn't not select one of the options." << endl << endl;
					break;
				}
			} while (action != 'q'); // end of stacks and the beginning of list
			break;
		case'd': //double
			do {
				cout << "a: Insert\nb: Search\nc: Delete\nd: Print\ne: Get number of nodes in the list\nq: Quit\n\nChoose an option: ";
				cin >> action;
				cout << endl;
				switch (action) {
				case'a': //inserts
					do {
						cout << "a: Insert object at start of the list\nb: Insert object in the middle of the list\nc: Insert object at the end of the list\nd: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //insert first
							cout << "What should this node contain?" << endl;
							cin >> valueDouble;
							doubleList.insertFirst(valueDouble);
							cout << endl;
							break;
						case'b': //insert middle
							cout << "What should this node contain?" << endl;
							cin >> valueDouble;
							cout << "Where would you like to place the node in the list?" << endl;
							cin >> valueInt;
							doubleList.insertHere(valueDouble, valueInt);
							cout << endl;
							break;
						case'c': //insert last
							cout << "What should this node contain?" << endl;
							cin >> valueDouble;
							doubleList.insertLast(valueDouble);
							cout << endl;
							break;
						case'd': //print
							doubleList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'b': //searches
					do {
						cout << "a: See what's in a node\nb: Find a value\nc: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //search by place
							cout << "Which node would you like to search?" << endl;
							cin >> valueInt;
							cout << endl;
							doubleList.searchByPlaceForData(valueInt);
							break;
						case'b': //search by data
							cout << "Enter what you're searching for: ";
							cin >> valueDouble;
							cout << endl;
							doubleList.searchByDataForPlace(valueDouble);
							break;
						case'c': //print
							doubleList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'c': //delete
					do {
						cout << "a: Delete a speciifc node\nb: Delete all nodes containing specified data\nc: Delete list\nd: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //delete by place
							cout << "Which node do you wish to delete?" << endl;
							cin >> valueInt;
							cout << endl;
							doubleList.deleteNodeByPlace(valueInt);
							break;
						case'b': //delete by data
							cout << "Enter the data of the nodes you wish to delete: ";
							cin >> valueDouble;
							cout << endl;
							doubleList.deleteNodesByData(valueDouble);
							break;
						case'c': //print
							doubleList.deleteAll();
							break;
						case'd': //print
							doubleList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'd': //print
					doubleList.print();
					break;
				case'e': //get count
					cout << "There are " << doubleList.getCount() << " nodes in the list\n" << endl;
					break;
				case'q': //quit
					break;
				default:
					cout << "You didn't select one of the options." << endl;
				}
			} while (action != 'q');
			break;
		case'e': //string
			do {
				cout << "a: Insert\nb: Search\nc: Delete\nd: Print\ne: Get number of nodes in the list\nq: Quit\n\nChoose an option: ";
				cin >> action;
				cout << endl;
				switch (action) {
				case'a': //inserts
					do {
						cout << "a: Insert object at start of the list\nb: Insert object in the middle of the list\nc: Insert object at the end of the list\nd: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //insert first
							cout << "What should this node contain?" << endl;
							cin >> valueString;
							stringList.insertFirst(valueString);
							cout << endl;
							break;
						case'b': //insert middle
							cout << "What should this node contain?" << endl;
							cin >> valueString;
							cout << "Where would you like to place the node in the list?" << endl;
							cin >> valueInt;
							stringList.insertHere(valueString, valueInt);
							cout << endl;
							break;
						case'c': //insert last
							cout << "What should this node contain?" << endl;
							cin >> valueString;
							stringList.insertLast(valueString);
							cout << endl;
							break;
						case'd': //print
							stringList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'b': //searches
					do {
						cout << "a: See what's in a node\nb: Find a value\nc: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //search by place
							cout << "Which node would you like to search?" << endl;
							cin >> valueInt;
							cout << endl;
							stringList.searchByPlaceForData(valueInt);
							break;
						case'b': //search by data
							cout << "Enter what you're searching for: ";
							cin >> valueString;
							cout << endl;
							stringList.searchByDataForPlace(valueString);
							break;
						case'c': //print
							stringList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'c': //delete
					do {
						cout << "a: Delete a speciifc node\nb: Delete all nodes containing specified data\nc: Delete list\nd: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //delete by place
							cout << "Which node do you wish to delete?" << endl;
							cin >> valueInt;
							cout << endl;
							stringList.deleteNodeByPlace(valueInt);
							break;
						case'b': //delete by data
							cout << "Enter the data of the nodes you wish to delete: ";
							cin >> valueString;
							cout << endl;
							stringList.deleteNodesByData(valueString);
							break;
						case'c': //print
							stringList.deleteAll();
							break;
						case'd': //print
							stringList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'd': //print
					stringList.print();
					break;
				case'e': //get count
					cout << "There are " << stringList.getCount() << " nodes in the list\n" << endl;
				case'q': //quit
					break;
				default:
					cout << "You didn't select one of the options." << endl;
				}
			} while (action != 'q');
			break;
		case'f': //currency
			do {
				cout << "a: Insert\nb: Search\nc: Delete\nd: Print\ne: Get number of nodes in the list\nq: Quit\n\nChoose an option: ";
				cin >> action;
				cout << endl;
				switch (action) {
				case'a': //inserts
					do {
						cout << "a: Insert object at start of the list\nb: Insert object in the middle of the list\nc: Insert object at the end of the list\nd: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //insert first
							cout << "What should this node contain?" << endl;
							cin >> valueDouble;
							cDollar.setByTotal(valueDouble);
							dollarList.insertFirst(cDollar);
							cout << endl;
							break;
						case'b': //insert middle
							cout << "What should this node contain?" << endl;
							cin >> valueDouble;
							cDollar.setByTotal(valueDouble);
							cout << "Where would you like to place the node in the list?" << endl;
							cin >> valueInt;
							dollarList.insertHere(cDollar, valueInt);
							cout << endl;
							break;
						case'c': //insert last
							cout << "What should this node contain?" << endl;
							cin >> valueDouble;
							cDollar.setByTotal(valueDouble);
							dollarList.insertLast(cDollar);
							cout << endl;
							break;
						case'd': //print
							dollarList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'b': //searches
					do {
						cout << "a: See what's in a node\nb: Find a value\nc: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //search by place
							cout << "Which node would you like to search?" << endl;
							cin >> valueInt;
							cout << endl;
							dollarList.searchByPlaceForData(valueInt);
							break;
						case'b': //search by data
							cout << "Enter what you're searching for: ";
							cin >> valueDouble;
							cDollar.setByTotal(valueDouble);
							cout << endl;
							dollarList.searchByCurrencyDataForPlace(cDollar);
							break;
						case'c': //print
							dollarList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'c': //delete
					do {
						cout << "a: Delete a speciifc node\nb: Delete all nodes containing specified data\nc: Delete list\nd: Print\nq: Quit\n\nChoose an option: ";
						cin >> decision;
						cout << endl;
						switch (decision) {
						case'a': //delete by place
							cout << "Which node do you wish to delete?" << endl;
							cin >> valueInt;
							cout << endl;
							dollarList.deleteNodeByPlace(valueInt);
							break;
						case'b': //delete by data
							cout << "Enter the data of the nodes you wish to delete: ";
							cin >> valueDouble;
							cDollar.setByTotal(valueDouble);
							cout << endl;
							dollarList.deleteCurrencyNodesByData(cDollar);
							break;
						case'c': //print
							dollarList.deleteAll();
							break;
						case'd': //print
							dollarList.print();
							break;
						case'q': //quit
							break;
						default:
							cout << "You didn't select one of the options." << endl;
						}
					} while (decision != 'q');
					break;
				case'd': //print
					dollarList.print();
					break;
				case'e': //get count
					cout << "There are " << dollarList.getCount() << " nodes in the list\n" << endl;
				case'q': //quit
					break;
				default:
					cout << "You didn't select one of the options." << endl;
				}
			} while (action != 'q');
			break;
		case'q':
			break;
		default:
			cout << "You didn't select one of the options." << endl;
		}
	} while (choice != 'q');

	system("pause");

	return 0;
}