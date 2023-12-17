/**
>>>>>>>>>>write a c program to find the largest element from an array<<<<<<<<<<<<<
**/
#include<stdio.h>

int main()

{
    int n;
    printf("enter array length : ");
    scanf("%d",&n); //3
    printf("enter array element :\n");
    int a[n], i; //a[3]
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]); //1 6 4
    int largest = a[0]; //1
    for(i = 1; i < n; i++)
    {
        if(largest < a[i]) //1 < 6 (T) => largest = a[i]
            largest = a[i]; //6
    }
    printf("Largest = %d\n",largest);
    return 0;
}
