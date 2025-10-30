#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int array[], int n)
{
    int comp_count = 0;
    int push = 0;
    int k = 0;
    int ptr;
    int t;
    int flag;

    printf("Original Random Array: \n");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }

    while(k < (n - 1))
    {
        ptr = 0;
        while(ptr < (n-k))
        {
            flag = 0;
            if(array[ptr] > array[ptr+1])
            {
                t = array[ptr];
                array[ptr] = array[ptr+1];
                array[ptr+1] = t;
                flag++;
            }
            ptr++;
            comp_count++;
        }

        push++;
        k++;

        printf("\nArray after Push %d:\n", push);
        for(int j = 0; j <= n; j++)
        {
            printf("%d ", array[j]);
        }

        if(flag == 0)
        {
            break;
        }
        
    }

    printf("\nNumber of comparisons: %d\nNumber of pushes: %d.", comp_count, push);
    return 1;
}

int main()
{
    int n = 10;
    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    bubble_sort(array, n - 1);
}