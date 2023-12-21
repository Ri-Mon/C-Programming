/**
Write a C program to print string characters in reverse order without using library function.
**/
#include<stdio.h>
int main()
{
    char st[500];
    printf("Enter a string : ");
    gets(st);
//1
    int l = strlen(st) - 1;    //  int l = strlen(st);

    int i;                    // int i;
    for(i=l; i>=0; i--)      //  for(i=l-1; i>= 0; i--)
        printf("%c",st[i]); //       printf("%c",st[i]);

//2
    int length = strlen(st);
    for(st[length] = '\0'; length > 0; length--)
        printf("%c",st[length-1]);

    return 0;
}
