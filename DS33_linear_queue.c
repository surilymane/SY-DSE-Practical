#include <stdio.h>

int enqueue(int l_queue[], int max_queue, int *rear, int *front)
{
	if(*rear == max_queue)
	{
		printf("Queue Overflow.\n");
		return 0;
	}
	
	int item;
	
	printf("Please enter the item to be enqueued in the queue: ");
	scanf("%d", &item);
	
	if(*rear == -1)
	{
		*rear = 0;
		*front = 0;
	}
	else
	{
		*rear += 1;
	}
	
	l_queue[*rear] = item;
	
	return 1;
}

int dequeue(int l_queue[], int max_queue, int *rear, int *front)
{
	if(*front == -1)
	{
		printf("Queue Undeflow.\n");
		return 0;
	}
	
	int item = l_queue[*front];
	
	printf("Item dequeued from the queue is: %d\n", item);
	
	if(*rear == *front)
	{
		*rear = -1;
		*front = -1;
	}
	else
	{
		*front += 1;
	}
	
	return 1;
}

int main()
{
	int max_queue;
	int rear = 0;
	int front = 0;
	
	printf("Please enter the number of elements in the queue: ");
	scanf("%d", &max_queue);
	
	int l_queue[max_queue];
	
	int choice;
	
	do
	{
		printf("Please enter 0 to stop, 1 to Enqueue and 2 to Dequeue: ");
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
			
			default:
				printf("Invalid number entered.\n");
				break;
			
		}
	}while(choice);

}
