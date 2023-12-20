/**
STRING : there are no data-type for string in C-P

declaration : char str[10];

#write a c program to read(inputting) and write(outputting) your nickname.
**/

#include<stdio.h>
int main()
{
    char x[10]; //string
    printf("enter your nickname : ");
    scanf("%s",&x);
    printf("%s",x);

    return 0;
}
