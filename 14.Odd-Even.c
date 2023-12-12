/**
write a c program to check a number whether it is odd or even.
10 is it odd or even?even
11 is it odd or even?odd
Decision making : if, if....else, else if  [if, else is also a keyword]
syntax of 'if else' : (for single statement) | (for multiple statement)
if (condition)                               |   if(condition)
    statement : condition is true;           | {   statement 1 : condition is true;
else                                         |     statement 2 : condition is false;  }
    statement : condition is false;          |   else
                                             |  {   statement 1 : condition is false;
                                             |      statement 2 : condition is false;  }
**/
#include<stdio.h>
int main()
{
    int x=10,y=11;
    if (x%2==0)
        printf("%d is a even number\n",x);
    else
        printf("%d is a odd number\n",x);

    if (y%2==1) printf("%d is a odd number",y);
    else        printf("%d is a even number",y);
    return 0;
}

/**
syntax of if :
if (condition)
    statement : condition is true;
**/
