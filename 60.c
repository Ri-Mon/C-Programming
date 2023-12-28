/**Write a C Program to compare two strings whether they are same or not.
strcmp(string1, string2) == 0
**/

#include<stdio.h>
int main ()
{
    char a[500],b[500];
    printf("Enter 1st string : ");
    gets(a);//Hello
    printf("Enter 2nd string : ");
    gets(b);//Hello

    if(strcmp(a,b) == 0)
    {
          puts("\nBoth strings are same.");
    }
    else
    {
        puts("\nBoth strings aren't same.");
    }

    return 0;
}

//If two strings are identical, then strcmp function returns 0.


