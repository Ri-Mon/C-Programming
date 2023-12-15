/**
syntax of do...while :
    initialization;
    do
{   statement(s);               ; now, write a c program to find the sum of following series :
    increment/decrement;                                 1+2+3+4.
}
 while(condition);
**/

#include<stdio.h>
int main()
{
    int i=1,s=0;
    do
    {
        printf("when i=%d\t summation = %d\n",i,s=s+i);
        i++;
    }
    while(i<=4);
    return 0;
}


