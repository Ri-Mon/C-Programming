/**
write a c program to display the summation of following series :
1+2+3+ ... ... +99+100.
**/

#include<stdio.h>
int main()
{
    int i,s = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("when i = %d \t",i);
        s = s + i;
        printf("summation = %d\n",s);
    }
    return 0;
}
