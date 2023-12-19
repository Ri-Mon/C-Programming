/**
3. C function With ARGUMENTS and WITHOUT Return value.
**/

#include<stdio.h>
void add(int a,int b);  //with parameters and without return value.
int main()
{
    add(5,6);
    add(3,7);
    add(33,44);
    add(9,2);
    return 0;
}
void add(int a,int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}

/**
c function arguments and return values :
----------------------------------------
All c functions can be called either with arguments or without arguments in a c program.
These functions may or may not return values to the calling function.
Now,we will see simple example of c programs for each one of the below:
**/
