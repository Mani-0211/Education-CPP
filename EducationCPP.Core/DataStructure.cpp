#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>

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

void DataStructure::Deque()
{
	// create a deque
	deque<int> numbers;
			
	// add values to front
	numbers.push_front(3);
	numbers.push_front(2);
	numbers.push_front(1);

	// add values to back
	numbers.push_back(4);
	numbers.push_back(5);

	// is deque empty?
	cout << "is deque empty - " << numbers.empty() << "\n\n";

	// size of a deque
	cout << "size of the deque - " << numbers.size() << "\n\n";

	// access front and back items
	cout << "first item of the deque - " << numbers.front() << "\n";
	cout << "last item of the deque - " << numbers.back() << "\n\n";

	// access values index based
	cout << "item at the index 2 - " << numbers.at(2) << "\n\n";

	// change values index based
	numbers.at(1) = 22;
	cout << "after change the item in index 1 as 22 - " << numbers.at(1) << "\n\n";

	// loop through a deque using for loop
	cout << "loop through a deque using for loop:\n";

	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers.at(i) << " ";
	}

	cout << "\n";

	// loop through a deque using for each loop
	cout << "loop through a deque using for each loop:\n";

	for (int number : numbers)
	{
		cout << number << " ";
	}

	cout << "\n";
}

void DataStructure::Set()
{
	// create a set
	set<int> numbers;

	// add items
	numbers.insert(1);
	numbers.insert(2);
	numbers.insert(2);
	numbers.insert(3);
	numbers.insert(4);

	// remove items
	numbers.erase(3);

	// loop through using for each loop (indexing not allowed. so, for loop not possible)
	cout << "iterating a set using for each loop. (indexing not allowed. so, for loop not possible) :\n";
	
	for (int number : numbers)
	{
		cout << number << " ";
	}

	cout << "\n\n";

	// is empty? size and clear operations
	cout << "is empty - " << numbers.empty() << "\n";
	cout << "size - " << numbers.size() << "\n\n";

	numbers.clear();

	cout << "after cleared a set: \n";
	cout << "is empty - " << numbers.empty() << "\n";
	cout << "size - " << numbers.size() << "\n\n";

	// sort by descending order (by default it is in ascending order)
	set<int, greater<int>> numbers_as_desc = { 3, 4, 7, 3, 2 };

	cout << "descending order set :\n";

	for (int number : numbers_as_desc)
	{
		cout << number << " ";
	}

	cout << "\n\n";
}