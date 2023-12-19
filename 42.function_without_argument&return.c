/**
c function arguments and return values :
----------------------------------------
All c functions can be called either with arguments or without arguments in a c program.
These functions may or may not return values to the calling function.
Now,we will see simple example of c programs for each one of the below:

1. C function WITHOUT Arguments and WITHOUT Return value.
 example : void function ();
**/

#include<stdio.h>

void add();//1.without arguments and without return value.
int main()
{
    add();
    return 0;
}
void add()
{
    int x,y;
    printf("Enter x and y : ");
    scanf("%d%d",&x,&y);
    printf("\nSum = %d\n",x+y);
}

/**
2. C function with arguments    and  with     Return value.
3. ...  ...   with arguments    and  without  ...    ...
4. ...  ...   without arguments and  with     ...    ...
**/

