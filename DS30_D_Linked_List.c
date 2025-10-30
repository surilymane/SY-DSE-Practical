#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *prev;
    struct node *next;
}node;

int insert_st(node **start, node **end)
{
    node* new = (struct node*)malloc(sizeof(struct node));

    if (new == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }

    if(*start == NULL)
    {
        new->next = NULL;
        *end = new;
    }
    else
    {
        new->next = *start;
        (*start)->prev = new;
    }

    int item;

    printf("Enter item to be inserted: ");
    scanf("%d", &item);
 
    new->prev = NULL;
    new->data = item;
    *start = new;

    return 1;
}

int insert_end(node **start, node **end)
{
    node *new = (struct node*)malloc(sizeof(struct node));

    if(new == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }

    if(*end == NULL)
    {
        new->prev = NULL;
        *start = new;
    }
    else
    {
        new->prev = *end;
        (*end)->next = new;
    }

    int item;

    printf("Enter item to be inserted: ");
    scanf("%d", &item);

    new->next = NULL;
    new->data = item;
    *end = new;

    return 1;
}

int insert_bef(node **start, node **end, int data_loc)
{
    node *t = *start;

    while(t->data != data_loc)
    {
        t = t->next;

        if(t == NULL)
        {
            printf("Data not found.\n");
            return 0;
        }
    }

    node *new = (struct node*)malloc(sizeof(struct node));

    if (new == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }

    new->next = t;
    new->prev = t->prev;
    t->prev->next = new;
    t->prev = new;
    
    int item;
    printf("Please enter item to be inserted: ");
    scanf("%d", &item);

    new->data = item;

    return 1;
}

int insert_aft(node **start, node **end, int data_loc)
{
    if((*start == NULL)||((*start)->data == data_loc))
    {
        insert_st(start, end);
        return 1;
    }
    
    node *t = *start;

    while(t->data != data_loc)
    {
        t = t->next;

        if(t == NULL)
        {
            printf("Data not found.\n");
            return 0;
        }
    }

    node *new = (struct node*)malloc(sizeof(struct node));

    if (new == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }

    new->next = t->next;
    new->prev = t;
    t->next->prev = new;
    t->next = new;
    
    int item;
    printf("Please enter item to be inserted: ");
    scanf("%d", &item);

    new->data = item;

    return 1;
}

int insert_loc(node **start, node **end, int loc)
{
    if((*start == NULL)||(loc == 1))
    {
        insert_st(start, end);
        return 1;
    }

    int count = 1;
    node *t = *start;

    while(count < (loc-1))
    {
        t = t->next;

        if(t == NULL)
        {
            printf("Location not found.\n");
            return 0;
        }
    }

    node *new = (struct node*)malloc(sizeof(struct node));

    if (new == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }

    new->next = t->next;
    new->prev = t;
    t->next->prev = new;
    t->next = new;

    int item;
    printf("Please enter item to be inserted: ");
    scanf("%d", &item);

    new->data = item;

    return 1;
}

int delete_st(node **start, node **end)
{
    if(*start == NULL)
    {
        printf("Linked List Underflow.\n");
        return 0;
    }

    node *t = *start;

    printf("Value deleted is: %d\n", t->data);

    if(*start == *end)
    {
        *start = NULL;
        *end = NULL;
        free(t);
        return 1;
    }

    *start = t->next;
    t->next->prev = NULL;
    free(t);
    
    return 1;
}

int delete_end(node **start, node **end)
{
    if(*start == NULL)
    {
        printf("Linked List Underflow.\n");
        return 0;
    }

    node *t = *end;

    printf("Value deleted is: %d\n", t->data);

    if(*start == *end)
    {
        *start = NULL;
        *end = NULL;
        free(t);
        return 1;
    }

    *end = t->prev;
    t->prev->next = NULL;
    free(t);

    return 1;
}

int delete_data(node **start, node **end, int data_loc)
{
    if(*start == NULL)
    {
        printf("Linked List Underflow.\n");
        return 0;
    }

    if((*start)->data == data_loc)
    {
        delete_st(start, end);
        
        return 1;
    }   

    if((*end)->data == data_loc)
    {
        delete_end(start, end);
        
        return 1;
    }

    node *t = *start;

    while(t->data != data_loc)
    {
        t = t->next;

        if(t == NULL)
        {
            printf("Data not found.\n");
            return 0;
        }
    }

    printf("Value deleted is: %d\n", t->data);

    t->next->prev = t->prev;
    t->prev->next = t->next;
    
    free(t);

    return 1;
}

int delete_loc(node **start, node **end, int loc)
{
    if(*start == NULL)
    {
        printf("Linked List Underflow.\n");
        return 0;
    }

    if(loc == 1)
    {
        delete_st(start, end);
        return 1;
    }

    int count = 1;
    node *t = *start;

    while(count < loc)
    {
        t = t->next;
        count++;

        if(t == NULL)
        {
            printf("Location not found.\n");
            return 0;
        }
    }

    printf("Value deleted is: %d\n", t->data);

    if(*end == t)
    {
        *end = t->prev;
        t->prev->next = NULL;
    }
    else
    {
        t->prev->next = t->next;
        t->next->prev = t->prev;
    }

    free(t);

    return 1;
}

int display(node **start, node **end)
{
    if(*start == NULL)
    {
        printf("No Linked List.\n");
        return 0;
    }

    node *t = *start;

    printf("The Linked List is: \n");

    while(t != NULL)
    {
        printf("%d\n", t->data);

        t = t->next;
    }

    return 1;
}

int display_rev(node **start, node **end)
{
    if(*end == NULL)
    {
        printf("No Linked List.\n");
        return 0;
    }

    node *t = *end;

    printf("The Linked List in Reverse is: \n");

    while(t != NULL)
    {
        printf("%d\n", t->data);

        t = t->prev;
    }

    return 1;
}

int search(node **start, node **end, int data_loc)
{
    if(*start == NULL)
    {
        printf("No Linked List.\n");
        return 0;
    }

    int count = 0;
	int found = 0;
	node *t = *start;

	while(t != NULL)
	{
		count++;

		if(t->data == data_loc)
		{
			found++;
			printf("The data %d is found at index %d and the location %d.\n", data_loc, count - 1, count);
		}
		
		t = t->next;
	}

	if(found == 0)
	{
		printf("Item not in Linked List.\n");
		return 0;
	}
	
	return 1;
}

int main()
{
    node *start = NULL;
    node *end = NULL;
    int choice, data_loc, loc;

    do
    {
        printf("Please enter:\n0 to stop \n1 to insert at start \n2 to insert at end \n3 to insert before data \n4 to insert after data \n5 to insert at location \n6 to delete at start \n7 to delete at end \n8 to delete by data \n9 to delete at location \n10 to display start to end \n11 to display end to start \n12 to search: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 0:
                printf("Terminating Program.\n");
                break;

            case 1:
                insert_st(&start, &end);
                break;
            
            case 2:
                insert_end(&start, &end);
                break;

            case 3:
                if((start == NULL)||((start)->data == data_loc))
                {
                    insert_st(&start, &end);
                    break;
                }
                printf("Please enter the data before which insertion should be done: ");
                scanf("%d", &data_loc);
                insert_bef(&start, &end, data_loc);
                break;

            case 4:
                printf("Please enter the data after which insertion should be done: ");
                scanf("%d", &data_loc);
                insert_aft(&start, &end, data_loc);
                break;
            
            case 5:
                printf("Please enter the location at which insertion should be done: ");
                scanf("%d", &loc);
                insert_loc(&start, &end, loc);
                break;

            case 6:
                delete_st(&start, &end);
                break;

            case 7:
                delete_end(&start, &end);
                break;

            case 8:
                printf("Please enter the data to be deleted: ");
                scanf("%d", &data_loc);
                delete_data(&start, &end, data_loc);
                break;

            case 9:
                printf("Please enter the location to be deleted: ");
                scanf("%d", &loc);
                delete_loc(&start, &end, loc);
                break;

            case 10:
                display(&start, &end);
                break;

            case 11:
                display_rev(&start, &end);
                break;

            case 12:
                printf("Please enter data to be searched: ");
                scanf("%d", &data_loc);
                search(&start, &end, data_loc);
                break;

            default:
                printf("Invalid Input.");
                break;
        }
    }while(choice);
}