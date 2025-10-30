#include <stdio.h>

// Enqueue function to add elements to the queue.
int enqueue(int c_queue[], int max_queue, int *rear, int *front)
{
    // Condition to check overflow.
    if(((*front == 0)&&(*rear == max_queue))||(*front == (*rear + 1)))
    {
        printf("Queue Overflow.\n");
        return 0;
    }

    int item;
    printf("Please enter the item to be enqueued: ");
    scanf("%d", &item);

    // Conditions for first added element, for when the queue if full and otherwise.
    if(*rear == -1)
    {
        *rear = 0;
        *front = 0;
    }
    else if(*rear == max_queue)
    {
        *rear = 0;
    }
    else
    {
        *rear += 1;
    }

    c_queue[*rear] = item;

    return 1;
}

// Dequeue function to delete elements from the queue.
int dequeue(int c_queue[], int max_queue, int *rear, int *front)
{
    // Condition to check Underflow.
    if(*front == -1)
    {
        printf("Queue Underflow.\n");
        return 0;
    }

    int item;
    item = c_queue[*front];
    printf("Item Dequeued from the Queue is: %d\n", item);

    // Conditions to check for when all elements are displayed, when rear is behind front and otherwise.
    if(*rear == *front)
    {
        *rear = -1;
        *front = -1;
    }
    else if (*front == max_queue)
    {
        *front = 0;
    }
    else
    {
        *front += 1;
    }
    
    return 1;
}

// Display function to display elements of the queue.
int display(int c_queue[], int max_queue, int *rear, int *front)
{
    // Condition to check if Queue is empty.
    if(*rear == -1)
    {
        printf("Empty Queue.\n");
        return 0;
    }

    // Temporary variable is declared to preserve the value of front.
    int i = *front;

    printf("The queue is:\n");
    
    // This while codnition makes sure that the loop stops when i value bypasses the rear when wrapped around.
    while(i != (*rear + 1)%(max_queue))
    {
        printf("%d\n", c_queue[i]);
        // i is set to i + 1 % max so that it can wrap around to 0 when rear is behind front.
        i = (i + 1) % max_queue;
    }
    
    return 1;
}

int main()
{
    int max_queue;
    printf("Please enter the number of elements in the queue: ");
    scanf("%d", &max_queue);

    int c_queue[max_queue];
    int rear = -1;
    int front = -1;

    int choice;

    do
    {
        printf("Please enter 0 to stop, 1 to Enqueue, 2 to Dequeue and 3 to Display: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 0:
                printf("Terminating Program.");
                break;
            
            case 1:
                enqueue(c_queue, (max_queue - 1), &rear, &front);
                break;

            case 2:
                dequeue(c_queue, (max_queue - 1), &rear, &front);
                break;

            case 3:
                display(c_queue, max_queue, &rear, &front);
                break;

            default:
                printf("Please enter a valid choice.\n");
                break;
        }
    } while (choice);
    
}