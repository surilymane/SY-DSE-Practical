#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int array[], int n)
{
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

    insertion_sort(array, n);
}