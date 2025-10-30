#include <stdio.h>
#include <stdlib.h>

int selection_sort(int array[], int n)
{
    int min, loc, t;
    int comp_count = 0;
    int push = 0;
    int k = 0;

    while(k < (n-1))
    {
        min = array[k];
        loc = k;

        for(int j = k; j < n; j++)
        {
            if(min > array[j])
            {
                min = array[j];
                loc = j;
            }
            comp_count++;
        }

        t = array[k];
        array[k] = array[loc];
        array[loc] = t;
        
        push++;
        k++;
    }

    printf("\nSorted Array: \n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nNumber of passes: %d\nNumber of comparisons: %d", push, comp_count);

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

    printf("Random Array: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    selection_sort(array, n);
}