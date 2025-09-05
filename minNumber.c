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



/* Direct Method 

#include <stdio.h>

int main () {
    int minElement, size;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Array Elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    minElement = arr[0];
    for(int i = 0; i<size; i++) {
        if(minElement > arr[i]) {
            minElement = arr[i];
        }
    }

    printf("Smallest Element is : %d", minElement);

    return 0;
} */