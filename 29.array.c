#include<stdio.h>
int main()
{
    int x0 = 2, x1 = 4, x2 = 5, x3 = 7, x4 = 9;
    printf("x0 = %d\nx1 = %d\nx2 = %d\nx3 = %d\nx4 = %d\n",x0,x1,x2,x3,x4);
    printf("\nx0 + x1 + x2 + x3 + x4 = %d\n",x0+x1+x2+x3+x4);

    printf("\n>>>>>>>>Now Using ARRAY<<<<<<<<\n");

    int x[5] = {2,4,5,7,9}; //array declaration with initialization.
    printf("\nx[0] = %d\n",x[0]);
    printf("x[1] = %d\n",x[1]);
    printf("x[2] = %d\n",x[2]);
    printf("x[3] = %d\n",x[3]);
    printf("x[4] = %d\n",x[4]);
    printf("\nx[0] + x[1] + x[2] + x[3] + x[4] = %d\n",x[0]+x[1]+x[2]+x[3]+x[4]);

    return 0;
}

/**
Array : => It's a collection of data that holds fixed number of value of same type.
        => Here 1st position is always 0 and last position will be n-1.
        => Mostly "For loop" used here.
    1. 1D (one dimensional) array
        >>syntax : arrayType arrayName[arraySize]
        >>example: int x[5]; [array declaration,here 5 is the total number of element of array.]
                here, array element : 2,4,5,7,9.
                      array index   : 0,1,2,3,4.
           accessing array elements : x[0]=2,x[1]=4,x[2]=5,x[3]=7,x[4]=9.
    2. Multi-dimensional array : 2D,3D...
**/

