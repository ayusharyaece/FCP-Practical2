#include <stdio.h>

void main()
{
    int arr[] = {2,7,15,12,19,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
}
