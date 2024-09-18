// C or C++ program for insertion and
// deletion in Circular Queue
#include<bits/stdc++.h>
using namespace std;

class Queue
{
	// Initialize front and rear
	int rear, front;

	// Circular Queue
	int size;
	int *arr;
public:
	Queue(int s)
	{
	front = rear = -1;
	size = s;
	arr = new int[s];
	}

	void enQueue(int value);
	int deQueue();
	void displayQueue();
};


// Function to insert an element into the circular queue
void Queue::enQueue(int value)
{
    // Check if the queue is full
    if ((front == 0 && rear == size-1) ||  // Case 1: Queue is full when 'front' is at 0 and 'rear' is at last index
        ((rear + 1) % size == front))      // Case 2: Queue is full when the next rear position after incrementing would equal 'front'
    {
        printf("\nQueue is Full");         // If the queue is full, print an error message
        return;                            // Exit the function since no more elements can be added
    }

    // Case when the queue is empty (i.e., inserting the first element)
    else if (front == -1)
    {
        front = rear = 0;                  // Set both 'front' and 'rear' to 0 to mark the first element insertion
        arr[rear] = value;                 // Insert the value at position 0
    }

    // If 'rear' is at the end of the array but 'front' is not at 0, wrap around
    else if (rear == size-1 && front != 0)
    {
        rear = 0;                          // Move 'rear' to the beginning of the array (wrap-around)
        arr[rear] = value;                 // Insert the value at the new 'rear' position (i.e., at the start of the array)
    }

    // General case: increment the rear and insert the value
    else
    {
        rear++;                            // Move 'rear' to the next position
        arr[rear] = value;                 // Insert the value at the new 'rear' position
    }
}

// Function to delete an element from the circular queue
int Queue::deQueue()
{
    // Check if the queue is empty
    if (front == -1)
    {
        printf("\nQueue is Empty");        // If the queue is empty, print an error message
        return INT_MIN;                    // Return an error code (INT_MIN) to indicate the queue is empty
    }

    int data = arr[front];                 // Store the value at 'front' before deleting it
    arr[front] = -1;                       // Set the 'front' element to -1 (or any sentinel value) to indicate it's removed

    // If 'front' equals 'rear', that means the queue is now empty after deletion
    if (front == rear)
    {
        front = -1;                        // Reset 'front' to -1 indicating an empty queue
        rear = -1;                         // Reset 'rear' to -1 indicating an empty queue
    }

    // If 'front' is at the end of the array, wrap it around to 0 (circular behavior)
    else if (front == size-1)
        front = 0;                         // Move 'front' to the start of the array

    // Otherwise, just move 'front' to the next position in the array
    else
        front++;                           // Increment 'front' to point to the next element

    return data;                           // Return the removed element
}


// Function displaying the elements
// of Circular Queue
void Queue::displayQueue()
{
	if (front == -1)
	{
		printf("\nQueue is Empty");
		return;
	}
	printf("\nElements in Circular Queue are: ");
	if (rear >= front)
	{
		for (int i = front; i <= rear; i++)
			printf("%d ",arr[i]);
	}
	else
	{
		for (int i = front; i < size; i++)
			printf("%d ", arr[i]);

		for (int i = 0; i <= rear; i++)
			printf("%d ", arr[i]);
	}
}

/* Driver of the program */
int main()
{
	Queue q(5);

	// Inserting elements in Circular Queue
	q.enQueue(14);
	q.enQueue(22);
	q.enQueue(13);
	q.enQueue(-6);

	// Display elements present in Circular Queue
	q.displayQueue();

	// Deleting elements from Circular Queue
	printf("\nDeleted value = %d", q.deQueue());
	printf("\nDeleted value = %d", q.deQueue());

	q.displayQueue();

	q.enQueue(9);
	q.enQueue(20);
	q.enQueue(5);

	q.displayQueue();

	q.enQueue(20);
	return 0;
}
