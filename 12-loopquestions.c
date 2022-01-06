//Write a C program to find sum of first and last digit of a number
#include <stdio.h>
int main()
{
    int n, firstDigit, lastDigit, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);
    lastDigit = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    sum = firstDigit + lastDigit;
    printf("Sum = %d", sum);
    return 0;
}
