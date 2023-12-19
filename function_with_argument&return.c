/**
2. C function With ARGUMENTS and With RETURN value.
    example : int function (Argument1,Argument2);
**/

#include<stdio.h>

int add(int a,int b);   //with parameters and with return value.
int main ()
{
//1 : that's better
    int result = add(10,5);//calling with two arguments
    printf("%d\n",result);
//2 :
    printf("%d\n",add(50,60));
//3 :
    int x,y;
    printf("\nEnter x and y : ");
    scanf("%d%d",&x,&y);
    int z = add(x,y);
    printf("Sum = %d\n",z);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}

/**
c function arguments and return values :
----------------------------------------
All c functions can be called either with arguments or without arguments in a c program.
These functions may or may not return values to the calling function.
Now,we will see simple example of c programs for each one of the below:
**/
