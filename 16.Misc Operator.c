/**
misc operators :
sizeof() operator : returns the memory size of a variable or constant.
:? / conditional / ternary operator
**/

#include<stdio.h>
int main()
{
    printf("int = %d Bytes\n",sizeof(int));
    printf("float = %d Bytes\n",sizeof(float));
    printf("double = %d Bytes\n",sizeof(double));
    printf("char = %d Bytes\n",sizeof(char));
    return 0;
}

/**    [memory size is always int]
common data types :
int : 4B
float : 4B
double :  8B
char    :   1B
**/
