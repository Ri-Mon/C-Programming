/**
write a c program to check a number whether it is positive or negative/
10 is it a positive or neg? positive.
11 is it a positive or neg? neg.
**/
#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x :");
    scanf("%d",&x);
    if (x==0)
        printf("%d is rather positive or neg number",x);

    else if (x>0) printf("\n%d is a positive number\n",x);

    else     printf("%d is a neg number\n",x);


    return 0;
}
