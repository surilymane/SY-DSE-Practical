#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}tree;

struct tree* createnode()
{
	tree *node = (struct tree*)malloc(sizeof(struct tree));
	
	if(node == NULL)
	{
		printf("Memory Allocation Failed.\n");
		return 0;
	}
	
	printf("Enter item to be inserted: ");
	scanf("%d", &node->data);
	
	node->left = NULL;
	node->right = NULL;
	
	return node;
}

int insertnode(struct tree **root)
{
	if(*root == NULL)
	{
		*root = createnode();
		
		return 1;
	}
	
	tree *t = *root;
	
	int choice;
	
	printf("Enter: \n1 to insert at left of %d\n2 to insert at right of %d:", t->data, t->data);
	scanf("%d", &choice);
	
	if(choice == 1)
	{
		while(t->left != NULL)
		{
			t = t->left;
		}
		insertnode(&(t->left));
	}
	else if(choice == 2)
	{
		while(t->right != NULL)
			{
				t = t->right;
			}
		insertnode(&(t->right));
	}
	else
	{
		printf("Invalid Input.\n");
	}
	
	return 1;
}

int main()
{
	tree *root;
	
	root = NULL;
	
	insertnode(&root);
}

