/**
Arithmetic Operators
**/

#include<stdio.h>
int main ()
{
    int a=5,b=4; //variable declaration & initialization.
    printf("%d",a+b);
    printf("\n%d",a-b);
    printf("\n%d",a*b);
    printf("\n%d",a/b);
    printf("\n%d\n",a%b);

    printf("\na + b = %d",a+b);
    printf("\na - b = %d",a-b);
    printf("\na * b = %d",a*b);
    printf("\na / b = %d",a/b);
    printf("\na %% b = %d\n",a%b); //we need two modulus to display one modulus.

    return 0;
}

/**

if it was
a=4,b=5
then a/b=0,a%b=4
cause 5|4|0
        0
        -
        4
**/
