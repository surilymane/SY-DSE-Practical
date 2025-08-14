#include <stdio.h>



int push(int stack[], int max_stack, int item, int *top)
{
	(*top) += 1;
	
	stack[*top] = item;
	
	return 1;
}

int pop(int stack[], int *top)
{
	if(*top == -1)
	{
		printf("Stack Underflow.\n");
		return 0;
	}
	
	int item = stack[*top];
	
	printf("Popped item from stack: %d\n", item);
	
	*top -= 1;
	
	return 1;
}

int display(int stack[],int *top)
{
	if(*top == -1)
	{
		printf("End of Stack.\n");
		return 0;
	}
	
	printf("The stack is:\n");
	
	int i = *top;
	
	while(i > -1)
	{
		printf("%d\n", stack[i]);
		
		i -= 1;
	}
	
	return 1;
}

int main()
{
	int max_stack;
	int top = -1;
	printf("Please enter the number of elements in the stack: ");
	scanf("%d", &max_stack);
	
	int stack[max_stack];
	
	int choice;
	
	do
	{
		printf("Please enter 0 to stop, 1 to Push, 2 to Pop and 3 to Display: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 0:
				printf("Terminating Program.\n");
				break;
				
			case 1:
				
				int item;
				if(top == max_stack)
				{
					printf("Stack Overflow.\n");
					break;
				}
				printf("Please enter the number to be pushed onto the stack: ");
				scanf("%d", &item);
				push(stack, max_stack, item,&top);
				break;
			
			
			case 2:
			
				pop(stack, &top);
				break;
			
			case 3:
			
				display(stack, &top);
				break;
				
			default:
				printf("Invalid number entered.\n");
				break;
			
		}
	}while(choice);
}
