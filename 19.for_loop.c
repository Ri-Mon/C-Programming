/**
loops in c programing : when to use
    1. for          : when the number of Iteration/Case is known.
    2. while        : when the number of Iteration/Case is unknown.
    3. do...while   : when we need to execute at least for one time even though the statement is false.

syntax of for loop : for single statement.
    for (initialization; condition; increment/update or decrement/counter)
        statement;
syntax of for loop : for multiple statement.
    for (initialization;condition;increment/decrement) [here initialization is executed only for one time.]
    {
        statement 1;
        statement 2;
        statement 3;
    }
**/
//write a c program to display your name 100 times.
#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 100; i++)
        printf("%d. MHR\n",i);
    return 0;
}
