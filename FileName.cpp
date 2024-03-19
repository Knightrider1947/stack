#include <iostream>
#include<string>
using namespace std;


class  Stack
{
private:
	string* stackArray;
	int stackSize;
	int top;
public:
	Stack(int);
	void push(string);
	string pop();
	bool isFull() const;
	bool isEmpty() const;
	void display() const;
	Stack();
	~Stack();
};

Stack::Stack(int x)
{
	stackSize = x;
	stackArray = new string [stackSize];
	top = -1;
}

Stack::Stack()
{
	stackSize = 10;
	stackArray = new string [stackSize];
	top = -1;
}

Stack::~Stack()
{
	delete[] stackArray;
}

void Stack::push(string x)
{
	if (!isFull())
	{
		top++;
		stackArray[top] = x;

	}
}

string Stack::pop()
{
	string temp;
	temp = stackArray[top];
	top--;
	return temp;
}

bool Stack::isEmpty() const
{
	if (top == -1)
	{
		return true;
	}
	else
		return false;

}

bool Stack::isFull() const
{
	if (top == stackSize - 1)
	{
		return true;
	}
	else
		return false;
}

void Stack::display() const
{
	for (int i = 0; i <= top; i++)
	{
		cout << stackArray[i] << "\t";
	}
	cout << endl;
}
int main()
{

	string temp;
	Stack myStack(7);
	myStack.push("Karanpreet");
	myStack.display();
	myStack.push("Greg");
	myStack.display();
	myStack.push("Mohammad");
	myStack.display();
	if (!myStack.isEmpty())
	{
		temp = myStack.pop();
		cout << temp << endl;
	}
	myStack.display();
	myStack.push("Navdeep");
	myStack.display();
	return 0;
}