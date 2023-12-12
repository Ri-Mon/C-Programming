/**
syntax of conditional operator : [we can use conditional operator instead of if else.]
exp1 ? exp2 : exp3;
or,
(exp1) ? (exp2) : (exp3);

condition ?  condition is true : condition is false;
**/

#include<stdio.h>
int main()
{
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    x % 2 == 0 ? printf("%d is an even number\n",x) : printf("%d is an odd number\n",x);
    return 0;
}
