#include<stdio.h>

void main()
{
    int arr[] = {5,7,1,8,6,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of elements in the array is: %d\n", sum);
}
