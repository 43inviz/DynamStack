#include <iostream>
#include "myDynStack.h"
using namespace std;

void menu() {

	cout << "1 - Add element in stack\n";
	cout << "2 - Del element from stack\n";
	cout << "3 - Count of element in stack\n";
	cout << "4 - Is stack empty?\n";
	cout << "5 - Is stack full\n";
	cout << "6 - Clear stack\n";
	cout << "7 - Show last el in stack\n";
	cout << "8 - show stack\n";
	cout << "9 - fill arr\n";
	cout << "Enter choice: ";
}


int main() {
	srand(time(0));
	myDynStack st1;
	int choice;

	int result;
	bool resEmpt;
	bool resFull;
	char resChar;

	do {
		menu();
		cin >> choice;

		switch (choice)
		{
		case 1:


			if (st1.isFull()) {
				st1.addCapacity();
				st1.push(rand() % 10 - 2 - 190);
			}
			else {
				st1.push(rand () % 10 - 2 - 190);
			}
			
			
			break;
		case 2:
			st1.pop();
			break;
		case 3:
			result = st1.getCount();
			cout << "Count of elements: " << result << endl;
			break;
		case 4:
			resEmpt = st1.isEmpty();
			if (!resEmpt) {
				cout << "Stack not empty\n";
			}
			else {
				cout << "Stack is empty\n";
			}
			break;
		case 5:
			resFull = st1.isFull();
			if (!resFull) {
				cout << "Stack not full\n";

			}
			else {
				cout << "Stack is full\n";
			}
			break;
		case 6:
			st1.clearStack();
			break;
		case 7:
			resChar = st1.getLastChar();
			cout << "Last element: " << resChar << endl;
			break;
		case 8:
			cout << st1 << " ";
			cout << endl;
			break;
		case 9:
			if (st1.isFull()) {
				st1.addCapacity();
				for (int i = st1.getTop(); i < st1.getCapacity(); i++) {
					st1.push(rand() % 10 - 2 - 190);
				}
			}
			else {
				while (!st1.isFull()) {
					st1.push(rand() % 10 - 2 - 190);
				}
			}
			break;
		default:
			break;
		}

	} while (choice != 0);


	return 0;
}