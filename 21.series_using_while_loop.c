/**
write a program to display following series :
1,2,3,4, ... ... n.
**/
/**
syntax of while loop :
initialization;
while(condition)             ; now, write a c program to display numbers from 1-5 using while loop
    {statement(s);
    increment/decrement;
    }
**/
#include<stdio.h>
int main()
{
    int i,n;
    while(1)
    {
        printf("enter n : ");
        scanf("%d",&n);
        for(i = 1; i <= n; i++)
            printf("%d\t",i);
    }
    return 0;
}
