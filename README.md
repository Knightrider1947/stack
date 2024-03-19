# stack

Stack Implementation in C++

This repository contains a simple implementation of a Stack using C++. The stack is a fundamental data structure that follows the Last-In-First-Out (LIFO) principle. This means the last element added to the stack will be the first one to be removed. This implementation provides a basic example of how to work with stacks in C++ and includes operations such as push, pop, check if the stack is full, check if it is empty, and display the contents of the stack.

Features

Constructor Overloading: Two constructors provided; one default constructor initializing a stack of size 10, and another that allows specifying the size.
Dynamic Memory Allocation: Utilizes dynamic array allocation for stack implementation.
Basic Stack Operations: Includes methods for pushing elements into the stack, popping elements from the stack, checking if the stack is full, checking if it is empty, and displaying the contents of the stack.

How to Use

Including the Class: Copy the Stack class definition and its member function implementations into your project.
Creating a Stack Object: Instantiate a Stack object, optionally specifying the size of the stack.


Stack myStack; // Creates a default stack of size 10
Stack customStack(20); // Creates a stack of size 20
Working with the Stack: Use the push, pop, isFull, isEmpty, and display methods to manipulate and view the stack's contents.


myStack.push("ExampleElement"); // Push an element
string element = myStack.pop(); // Pop the top element
bool full = myStack.isFull(); // Check if the stack is full
bool empty = myStack.isEmpty(); // Check if the stack is empty
myStack.display(); // Display the stack contents
Example Usage
Below is an example usage of the Stack class, demonstrating pushing elements to the stack, popping an element, and displaying the stack's contents.

int main() {
    Stack myStack(7);
    myStack.push("Karanpreet");
    myStack.display();
    myStack.push("Greg");
    myStack.display();
    myStack.push("Mohammad");
    myStack.display();

    if (!myStack.isEmpty()) {
        string temp = myStack.pop();
        cout << "Popped: " << temp << endl;
    }

    myStack.display();
    myStack.push("Navdeep");
    myStack.display();

    return 0;
}
