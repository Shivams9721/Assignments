//write a program to print all the natural no from 1 to N-using while loop.
#include <stdio.h>
int main()
{
    int i, end;
    printf("all the naural number fron 1 to 10\n");
    scanf("%d", &end);
    i = 1;
    while (i <= end)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}