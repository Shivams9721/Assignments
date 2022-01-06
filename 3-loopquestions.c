//write a c program to print all alphabates from a-z using while loop.
#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("Alphabates from a - z are:\n");
    while (ch <= 'z')
    {
        printf("%c\n ", ch);
        ch++;
    }
    return 0;
}