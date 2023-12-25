/**
Write a C program to print 1st and last character of a string.
**/
#include<stdio.h>
int main()
{
    char st[500];
    printf("Enter a string : ");
    gets(st);

    int l = strlen(st);
    printf("1st character : %c\n",st[0]);
    printf("last character : %c",st[l-1]);

}
