#include <stdio.h>

// function for finding smallest element in an array
int MinElement(int arr[], int size)
{
    int minNumber = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (minNumber > arr[i])
        {
            minNumber = arr[i];
        }
    }
    return minNumber;
}

// main function
int main()
{
    int size, smallestNumber;
    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size];

    // reading array
    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallestNumber = MinElement(arr, size);

    // printing smallest number
    printf("Smallest Number in the Array is : %d", smallestNumber);

    return 0;
}