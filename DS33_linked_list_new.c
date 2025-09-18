#include <stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int insert_st(node **start)
{
	node *t = (struct node*)malloc(sizeof(struct node));
	
	if(t == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	int item;
	printf("Please enter the item to be added in the Linked List: ");
	scanf("%d", &item);
	
	t->data = item;
	
	if(*start == NULL)
	{
		*start = t;
		t->next = NULL;
	}
	else
	{
		t->next = *start;
		*start = t;
	}
	
	return 1;
}

int insert_end(node **start)
{
	node *t = (struct node*)malloc(sizeof(struct node));
	
	if(t == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	int item;
	printf("Please enter the item to be added: ");
	scanf("%d", &item);
	
	t->data = item;
	
	if(*start == NULL)
	{
		*start = t;
		t->next = NULL;
	}
	else
	{
		node *i = *start;
		
		while(i->next != NULL)
		{
			i = i->next;
		}
		
		i->next = t;
		t->next = NULL;
	}
	
	return 1;
}

int insert_bef(node **start, int data_loc)
{
	node *i = *start;
	if((*start == NULL) || (i->data == data_loc))
	{
		insert_st(start);
		return 1;
	}
	
	node *p;
	
	while (i->data != data_loc)
	{
		p = i;
		i = i->next;
		
		if(i == NULL)
		{
			printf("Data not found.\n");
			return 0;
		}
	}
	
	node *t = (struct node *)malloc(sizeof(struct node));
	
	if(t == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	int item;
	printf("Please enter the data to be inserted: ");
	scanf("%d", &item);
	
	t->next = i;
	p->next = t;
	t->data = item;
	
	return 1;
}

int insert_aft(node **start, int data_loc)
{
	if(*start == NULL)
	{
		insert_st(start);
		return 1;
	}
	
	node *i = *start;
	
	while (i->data != data_loc)
	{
		i = i->next;
		
		if(i == NULL)
		{
			printf("Data not found.\n");
			return 0;
		}
	}
	
	node *t = (struct node*)malloc(sizeof(struct node));
	
	if(t == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	int item;
	printf("Please enter the data to be inserted: ");
	scanf("%d", &item);
	
	t->next = i->next;
	i->next = t;	
	return 1;
}

int insert_loc(node **start, int loc)
{
	if(*start == NULL)
	{
		insert_st(start);
		return 1;
	}
	
	node *i = *start;
	int count = 1;
	
	while(count < (loc-1))
	{
		i = i->next;
		
		if(i == NULL)
		{
			printf("Location Not Found.\n");
			return 0;
		}
	}
	
	node *t = (struct node *)malloc(sizeof(struct node));
	
	if(t == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	int item;
	printf("Please enter the data to be inserted: ");
	scanf("%d", &item);
	
	t->next = i->next;
	i->next = t;
	t->data = item;
	
	return 1;
}

int delete_st(node **start)
{
	if(*start == NULL)
	{
		printf("Linked List Underflow.\n");
		return 0;
	}
	
	node *t = *start;
	
	printf("Value deleted is: %d\n", t->data);
	
	*start = t->next;
	free(t);
	
	return 1;
}

int delete_end(node **start)
{
	if(*start == NULL)
	{
		printf("Linked List Underflow.\n");
		return 0;
	}
	
	node *t = *start;
	node *p;
	
	if(t->next == NULL)
	{
		*start = NULL;
		return 1;		
	}
	
	while(t->next != NULL)
	{
		p = t;
		t = t->next;
		p->next = NULL;
	}
	
	printf("Value deleted is: %d\n", t->data);
	free(t);	

	return 1;
}

int delete_data(node **start, int data_loc)
{
	if(*start == NULL)
	{
		printf("Linked List Underflow.\n");
		return 0;
	}
	
	node *p, *t = *start;
	
	while(t->data != data_loc)
	{
		p = t;
		t = t->next;
		
		if(t == NULL)
		{
			printf("Data Not Found.\n");
			return 0;
		}
	}
	
	printf("Value Deleted is: %d\n", t->data);
	
	p->next = t->next;
	free(t);
	
	return 1;
}

int delete_loc(node **start, int loc)
{
	if(*start == NULL)
	{
		printf("Linked List Underflow.\n");
		return 0;
	}
	
	if(loc == 1)
	{
		delete_st(start);
		return 1;
	}
	
	int count = 1;
	node *p, *t = *start;
	
	while(count < loc)
	{
		p = t;
		t = t->next;
		
		if(t == NULL)
		{
			printf("Location Not Found.\n");
			return 0;
		}
	}
	
	p->next = t->next;
	printf("Value deleted is: %d\n", t->data);
	free(t);
	
	return 1;
}

int display(node **start)
{
	if(*start == NULL)
	{
		printf("Empty Linked List.\n");
		return 0;
	}
	
	node *t = *start;
	
	printf("The Linked List is: \n");
	
	while(t != NULL)
	{
		printf("%d \n", t->data);
		t = t->next;
	}
	
	return 1;
}

int main()
{
	node *start = NULL;
	int data_loc, loc, choice;
	
	do
	{
		printf("Please enter: \n1 to insert at start \n2 to insert at end \n3 to insert before data \n4 to insert after data \n5 to insert at location \n6 to delete at start \n7 to delete at end \n8 to delete by data \n9 to delete by location \n10 to display Linked List: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 0:
				printf("Terminating Program.\n");
				break;
				
			case 1:
				insert_st(&start);
				break;
				
			case 2:
				insert_end(&start);
				break;
				
			case 3:
				printf("Please enter data before which to insert: ");
				scanf("%d", &data_loc);
				insert_bef(&start, data_loc);
				break;
				
			case 4:
				printf("Please enter data after which to insert: ");
				scanf("%d", &data_loc);
				insert_aft(&start, data_loc);
				break;
				
			case 5:
				printf("Please enter the location to insert: ");
				scanf("%d", &loc);
				insert_loc(&start, loc);
				break;
				
			case 6:
				delete_st(&start);
				break;
				
			case 7:
				delete_end(&start);
				break;
				
			case 8:
				printf("Please enter data to delete: ");
				scanf("%d", &data_loc);
				delete_data(&start, data_loc);
				break;
				
			case 9:
				printf("Please enter location to delete: ");
				scanf("%d", &loc);
				delete_loc(&start, loc);
				break;
				
			case 10:
				display(&start);
				break;
		}
	}while(choice);
}
















