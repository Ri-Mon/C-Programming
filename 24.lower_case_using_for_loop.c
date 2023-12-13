/**
write a program to display following series :
a,c,e, ... ... u,w,y.
**/

#include<stdio.h>
int main()
{
    char i;
    for(i = 'a' ; i <= 'y' ; i = i + 2)
        printf("%c\t",i);
    return 0;
}
