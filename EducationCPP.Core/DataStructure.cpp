#include <iostream>
#include <vector>
#include <stack>
#include <queue>

#include "DataStructure.h"

using namespace std;

void DataStructure::Vector()
{
	// create a new vector
	vector<string> fruits = { "apple", "orange", "mango" };

	// access an item
	cout << "first item		 - " << fruits.at(0) << "\n";
	cout << "last item		 - " << fruits.at(fruits.size() - 1) << "\n";

	cout << "first item (.front)	 - " << fruits.front() << "\n";
	cout << "last item (.back)	 - " << fruits.back() << "\n\n";

	// change an item
	fruits.at(1) = "banana";

	cout << "after change the value	 - " << fruits.at(1) << "\n\n";

	// size of vector
	cout << "size of vector		 - " << fruits.size() << "\n\n";

	// is the vector empty?
	cout << "is the vector empty?	 - " << fruits.empty() << "\n\n";

	// add or delete last element
	fruits.push_back("orange");

	cout << "last added item		 - " << fruits.at(3) << "\n\n";
	
	cout << "size before removing last item - " << fruits.size() << "\n";
	fruits.pop_back();
	cout << "size after removing last item - " << fruits.size() << "\n\n";

	// iterating through for loop
	cout << "iterating through for loop: \n";
	for (int i = 0; i < fruits.size(); i++)
	{
		cout << i + 1 << " - " << fruits.at(i) << "\n";
	}

	// iterating through for each loop
	cout << "\niterating through for each loop: \n";
	for (string fruit : fruits)
	{
		cout << fruit << "\n";
	}
}

void DataStructure::Stack()
{
	// declare a stack
	stack<string> fruits;

	// check is the stack is empty
	cout << "is the stack empty - " << fruits.empty() << "\n\n";

	// add items to a stack
	fruits.push("mango");
	fruits.push("apple");
	fruits.push("orange");

	// get stack size
	cout << "size of the stack - " << fruits.size() << "\n\n";

	// access top of the stack item
	cout << "top of the stack item - " << fruits.top() << "\n\n";

	// remove item from the stack
	fruits.pop();
	fruits.pop();

	cout << "size of the stack after removed 2 fruits - " << fruits.size() << "\n";
	cout << "top of the stack item after removed 2 fruits - " << fruits.top() << "\n\n";
}

void DataStructure::Queue()
{
	// declare a queue
	queue<string> fruits;

	// check if the queue is empty or not
	cout << "is the queue empty - " << fruits.empty() << "\n\n";

	// Add items to the queue
	fruits.push("mango");
	fruits.push("orange");
	fruits.push("apple");

	// size of the queue
	cout << "size of the queue - " << fruits.size() << "\n\n";

	// first and last item of the queue
	cout << "first item - " << fruits.front() << "\n";
	cout << "last item - " << fruits.back() << "\n\n";

	// change the front and last item
	fruits.front() = "banana";
	fruits.back() = "strawberry";

	cout << "first item after changed the value - " << fruits.front() << "\n";
	cout << "last item after changed the value - " << fruits.back() << "\n\n";

	// remove first item
	fruits.pop();
	fruits.pop();

	cout << "queue size after removed the values - " << fruits.size() << "\n";
	cout << "first item after removed the values - " << fruits.front() << "\n\n";
}