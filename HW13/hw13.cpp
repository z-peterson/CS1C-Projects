#include <iostream>
using namespace std;

const int SIZE = 10;

// Queue class
template <typename T>
class queue
{
	T *arr;		// array to store queue elements
	int capacity;	// maximum capacity of the queue
	int top;	// front points to front element in the queue (if any)
	int rear;	// rear points to last element in the queue
	int count;	// current size of the queue

public:
	queue(int size = SIZE); 	// constructor
	~queue();   			// destructor

	void dequeue();
	void enqueue(T item);
	T front();
	int size();
	bool isEmpty();
	bool isFull();
};

// Constructor
template <typename T>
queue<T>::queue(int size)
{
	arr = new T[size];
	capacity = size;
	top = 0;
	rear = -1;
	count = 0;
}

// Destructor
template <typename T>
queue<T>::~queue()
{	
	delete arr;
}

// Utility function to remove front element from the queue
template <typename T>
void queue<T>::dequeue()
{
	// check for queue underflow
	if (isEmpty())
	{
		cout << "Underflow";
	}

	cout << "Removing " << arr[top] << '\n';

	top = (top + 1) % capacity;
	count--;
}

// Function to add an item to the queue
template <typename T>
void queue<T>::enqueue(T item)
{
	// check for queue overflow
	if (isFull())
	{
		cout << "Overflow";
		throw "Overflow";
		assert("Overflow");
	}

	cout << "Inserting " << item << '\n';

	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;
}

// Function to return front element in the queue
template <typename T>
T queue<T>::front()
{
	if (isEmpty())
	{
		cout << "Underflow";
		throw "Underflow";
		assert("Underflow");
	}
	return arr[top];
}

// Function to return the size of the queue
template <typename T>
int queue<T>::size()
{
	return count;
}

// Function to check if the queue is empty or not
template <typename T>
bool queue<T>::isEmpty()
{
	return (size() == 0);
}

// Function to check if the queue is full or not
template <typename T>
bool queue<T>::isFull()
{
	return (size() == capacity);
}

// main function
int main()
{
    queue<int> q(10);
    queue<string> q2(10);
    queue<double> q3(10);

    try {

    for(int i = 0; i < 6; i++) {
        q.enqueue(i);
        cout << "Element " << i+1 << " is " << q.front();
	cout << endl;
    }

    for(int i = 0; i < 4; i++) {
        q.dequeue();
        cout << "Element " << i+1 << " is " << q.front();
	cout << endl;
    }

    for(int i = 0; i < 5; i++) {
        q.enqueue(i);
        cout << "Element " << i+1 << " is " << q.front();
	cout << endl;
    }

    for(int i = 0; i < 3; i++) {
        q.dequeue();
        cout << "Element " << i+1 << " is " << q.front();
   	cout << endl;
    }

    for(int i = 0; i < 6; i++) {
        q2.enqueue("Hello");
        cout << "Element " << i+1 << " is " << q2.front();
    	cout << endl;
    }

    for(int i = 0; i < 4; i++) {
        q2.dequeue();
        cout << "Element " << i+1 << " is " << q2.front();
    	cout << endl;
    }

    for(int i = 0; i < 5; i++) {
        q2.enqueue("Goodbye");
        cout << "Element " << i+1 << " is " << q2.front();
   	cout << endl; 
    }

    for(int i = 0; i < 3; i++) {
        q2.dequeue();
        cout << "Element " << i+1 << " is " << q2.front();
   	cout << endl; 
    }

    for(int i = 0; i < 6; i++) {
        q3.enqueue(i);
        cout << "Element " << i+1 << " is " << q3.front();
   	cout << endl; 
    }

    for(int i = 0; i < 4; i++) {
        q3.dequeue();
        cout << "Element " << i+1 << " is " << q3.front();
   	cout << endl; 
    }

    for(int i = 0; i < 5; i++) {
        q3.enqueue(i);
        cout << "Element " << i+1 << " is " << q3.front();
	cout << endl;
    }

    for(int i = 0; i < 3; i++) {
        q3.dequeue();
        cout << "Element " << i+1 << " is " << q3.front();
   	cout << endl; 
    }

    } catch {
	cout << "Exception Caught" << endl;
	}

    if (q.isEmpty())
	cout << "Queue Is Empty\n";
    else
	cout << "Queue Is Not Empty\n";

    if (q.isFull())
        cout << "Queue Is Full\n";
    else
        cout << "Queue Is Not Full\n";


    q.~queue();
    q2.~queue();
    q3.~queue();

    return 0;
}
