#pragma once
#include <iostream>

class myDynStack
{
	int top;
	enum { EMPTY = -1};
	int capacity;
	char* arr;
public:
	
	myDynStack();
	~myDynStack();

	int getTop();
	int getCapacity();

	void clearStack();
	void addCapacity();

	int getCount();
	char getLastChar();

	bool isEmpty();
	bool isFull();

	void push(char ch);
	char pop();

	friend std::ostream& operator<<(std::ostream& out, const myDynStack& stack) {
		for (int i = 0; i < stack.top; i++) {
			out << stack.arr[i] << " ";
		}
		return out;
	}

};


