///>>>>>>>>>>write a c program to find the Smallest element from an array<<<<<<<<<<<<<

#include<stdio.h>

int main()

{
    int n;
    printf("Enter Array Length : "); //3
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    int a[n], i; //a[3]
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]); //4 6 1
    int smallest = a[0]; //4
    for(i = 1; i < n; i++)

        if( smallest > a[i]) //4 > 6 (T), 4>1 (F)
            smallest = a[i]; //1

    printf("Smallest = %d\n",smallest);
    return 0;

} //next time will learn array searching technique
