/**
4. C function WITHOUT Arguments and With RETURN value.
**/

#include<stdio.h>

int add();  //without arguments and with return value.
int main()
{
    int z = add();
    printf("%d\n",z);
    return 0;
}
int add()
{
     int x,y;
    printf("Enter x and y : ");
    scanf("%d%d",&x,&y);
    return x + y;
}

/**
c function arguments and return values :
----------------------------------------
All c functions can be called either with arguments or without arguments in a c program.
These functions may or may not return values to the calling function.
Now,we will see simple example of c programs for each one of the below:
**/
