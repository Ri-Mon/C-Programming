/************************************************************************

write a c program to take 5 inputs from user and display them with index.

************************************************************************/

#include<stdio.h>
int main()

{
    int x[5]; //1D array declaration .
    int i;
    printf("input 5 numbers :\n");
    for(i=0; i<5; i++)
        scanf("%d",&x[i]);

    printf("display array elements :\n");
    for(i=0; i<5; i++)
        printf("x[%d] = %d\n",i,x[i]);

    return 0;
}

