#include<stdio.h>

void main() 
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        fact *= i;
    }

    printf("Factorial of %d = %d", n, fact);

}
