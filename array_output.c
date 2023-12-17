#include<stdio.h>

int main()

{
    int x[] = {1,2,3,4,5,6};
    int arrayLength = sizeof(x)/sizeof(x[0]);
    //or,sizeof(variableType) or,sizeof(variableSize in memory) but x[0] is better.
    int i;       //size in memory. and (x)=name of array.
    for(i = 0; i < arrayLength; i++)
        printf("%d\n",x[i]);
    return 0;
}
