//Write a C program to find first and last digit of a number
#include <stdio.h>
int main()
{
    int n, firstDigit, lastdigit;

    printf("Enter any number: ");
    scanf("%d", &n);
    lastdigit = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("First Digit = %d and Last digit = %d", firstDigit, lastdigit);
    return 0;
}