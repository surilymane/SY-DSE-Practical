#include <stdio.h>


// Enqueue function to add elements in the queue.
int enqueue(int l_queue[], int max_queue, int *rear, int *front)
{
	// Condition to check if the queue is full.
	if(*rear == max_queue)
	{
		printf("Queue Overflow.\n");
		return 0;
	}
	

	// Input taken of the item to be added in the queue
	int item;
	
	printf("Please enter the item to be enqueued in the queue: ");
	scanf("%d", &item);
	
	// Incrementing both the indexes so that they point at the first element if it is the first element that is added.
	if(*rear == -1)
	{
		*rear = 0;
		*front = 0;
	}
	// This condition is used to increment only rear for all the other insertions.
	else
	{
		*rear += 1;
	}
	
	// the item is added in the queue.
	l_queue[*rear] = item;
	
	return 1;
}

// Dequeue function to delete item from queue.
int dequeue(int l_queue[], int max_queue, int *rear, int *front)
{

	// Condition to chech if the queue is already empty.
	if(*front == -1)
	{
		printf("Queue Undeflow.\n");
		return 0;
	}
	
	// Item is deleted before incrementation.
	int item = l_queue[*front];
	
	printf("Item dequeued from the queue is: %d\n", item);
	
	// Both the indexes are set to the starting point again since the queue is empty when both are same.
	if(*rear == *front)
	{
		*rear = -1;
		*front = -1;
	}
	// Otherwise, only front is incremented.
	else
	{
		*front += 1;
	}
	
	return 1;
}

// Function to display the queue.
int display(int l_queue[], int max_queue, int *rear, int *front)
{

	// Condition to check if the queue is empty.
	if ((*front == -1) ||(*front ==  (*rear + 1)))
	{
		printf("Empty Queue.\n");

		return 0;
	}

	printf("The queue is: \n");

	// Starting at front, the queue is displayed until it meaat rear.
	for(int i = *front; i <= *rear; i++)
	{
		printf("%d\n", l_queue[i]);
	}

	return 1;
}

int main()
{
	int max_queue;
	int rear = -1;
	int front = -1;
	
	printf("Please enter the number of elements in the queue: ");
	scanf("%d", &max_queue);
	
	int l_queue[max_queue];
	
	int choice;
	
	// Loop runs until user chooses to stop.
	do
	{
		// User is asked to choose between the three options.
		printf("Please enter 0 to stop, 1 to Enqueue, 2 to Dequeue and 3 to Display: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 0:
				printf("Terminating Program.\n");
				break;
				
			case 1:
				
				enqueue(l_queue, max_queue, &rear, &front);
				break;
			
			
			case 2:
			
				dequeue(l_queue, max_queue, &rear, &front);
				break;

			case 3:
				display(l_queue, max_queue, &rear, &front);
				break;
			
			default:
				printf("Invalid number entered.\n");
				break;
			
		}
	// Loop runs until the choice variable is non zero.
	}while(choice);

}
