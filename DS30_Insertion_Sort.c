#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int array[], int n)
{
	int comp_count = 0;
	int push = 0;
	
    for(int k = 0; k < n; k++)
    {
        int t = array[k];
        int ptr = k - 1;
        
        while(t < array[ptr])
        {
            array[ptr+1] = array[ptr];
            ptr--;
        }
        comp_count++;
        
        array[ptr+1] = t;
        push++;
    }
    
    printf("\nSorted array: \n");
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\nNumber of Pushes: %d\nNumber of Comparisons: %d\n.", push, comp_count);
    return 1;
}

int main()
{
    int n = 10;
    int array[n];

    for(int i = 0; i < n; i++)
    {
        array[i] = rand() % 51;
    }
    
    printf("\nRandomly generated array: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    insertion_sort(array, n);
}
