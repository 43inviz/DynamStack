#include "myDynStack.h"

myDynStack::myDynStack()
{
	
	capacity = 20;
	top = EMPTY;
	arr = new char[capacity + 1];
}

myDynStack::~myDynStack()
{
	delete[] arr;
}

void myDynStack::clearStack()
{
	top = EMPTY;
}

int myDynStack::getTop()
{
	return this->top;
}

int myDynStack::getCount()
{
	return this->top;
}

void myDynStack::addCapacity()
{
	if (isFull()) {
		int newCapacity = capacity * 2;
		char* newArr = new char[newCapacity];
		for (int i = 0; i <= top+1; i++) {
			newArr[i] = arr[i];
		}
		delete[] arr;
		arr = newArr;
		capacity = newCapacity;
	}
}

int myDynStack::getCapacity()
{
	return this->capacity;
}

char myDynStack::getLastChar()
{
	return arr[top-1];
}

bool myDynStack::isEmpty()
{
	if (top == EMPTY) {
		return true;
	}
	return false;
}

bool myDynStack::isFull()
{
	if (top == capacity) {
		return true;
	}
	return false;
}

void myDynStack::push(char ch)
{

	if (isFull()) {
		addCapacity();
	}
	top++;
	arr[top] = ch;
	//if (!isFull()) {
	//	top++;
	//	this->arr[top] = ch;
	//}
	//else {
	//	

	//	char* newArr = new char[capacity];
	//	for (int i = 0; i < top; i++) {
	//		newArr[i] = arr[i];
	//	}
	//	
	//	
	//	delete[] arr;
	//	arr = newArr;
	//	top++;
	//	newArr[top] = ch;
	//}
}

char myDynStack::pop()
{
	if (!isEmpty()) {
		top--;
		return arr[top];
	}
	return '\0';

}
