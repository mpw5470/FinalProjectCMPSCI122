#ifndef ExpenseRevenueQueue_H
#define ExpenseRevenueQueue_H
#include <iostream>
#include<string>
using namespace std;

// DynamicQueue template
template <class T>
class ExpenseRevenueQueue
{
private:
	// Structure for the queue nodes
	struct QueueNode
	{
		T value;			// Value in a node
		QueueNode *next;	// Pointer to the next node
	};

	QueueNode *front;  // The front of the queue
	QueueNode *rear;   // The rear of the queue
	int numItems;      // Number of items in the queue
public:
	// Constructor
	ExpenseRevenueQueue();

	// Destructor
	~ExpenseRevenueQueue();

	// Queue operations
	void enqueue(T);
	void dequeue(T &);
	bool isEmpty() const;
	void clear();
};

//********************************************
// The constructor creates an empty queue.   *
//********************************************
template <class T>
ExpenseRevenueQueue<T>::ExpenseRevenueQueue()
{
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

//********************************************
// Destructor                                *
//********************************************
template <class T>
ExpenseRevenueQueue<T>::~ExpenseRevenueQueue()
{
	clear();
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
template <class T>
void ExpenseRevenueQueue<T>::enqueue(T item)
{
	QueueNode *newNode = nullptr;

	// Create a new node and store num there.
	newNode = new QueueNode;
	newNode->value = item;
	newNode->next = nullptr;

	// Adjust front and rear as necessary.
	if (isEmpty())
	{
		front = newNode;
		rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}

	// Update numItems.
	numItems++;
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
template <class T>
void ExpenseRevenueQueue<T>::dequeue(T &item)
{
	QueueNode *temp = nullptr;

	if (isEmpty())
	{
		cout << "The queue is empty.\n";
	}
	else
	{
		// Save the front node value in num.
		item = front->value;

		// Remove the front node and delete it.
		temp = front;
		front = front->next;
		delete temp;

		// Update numItems.
		numItems--;
	}
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
template <class T>
bool ExpenseRevenueQueue<T>::isEmpty() const
{
	bool status;

	if (numItems > 0)
		status = false;
	else
		status = true;
	return status;
}

//********************************************
// Function clear dequeues all the elements  *
// in the queue.                             *
//********************************************
template <class T>
void ExpenseRevenueQueue<T>::clear()
{
	T value;   // Dummy variable for dequeue

	while (!isEmpty())
		dequeue(value);
}
#endif