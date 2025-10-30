#include <stdio.h>

int binary_search(int data_array[], int data)
{
    int mid;
    int beg = 0;
    int end = 9;

    mid = (end+beg)/2;

    while(beg<=end)
    {
        if(data_array[mid]==data)
        {
            printf("Data found at index: %d.\n", mid);
            return 1;
        }

        if(data_array[mid] < data)
        {
            beg = mid - 1;
        }
        else
        {
            end = mid + 1;
        }

        mid = (end+beg)/2;
    }

    if(beg > end)
    {
        printf("Data not in Array.\n");
    }

    return 1;
}

int main()
{
    int data_array[10] = {1, 2, 6, 13, 14, 20, 23, 78, 79, 90};
    int data, choice;

    printf("Enter data to be searched: ");
    scanf("%d", &data);
    
    binary_search(data_array, data);
}