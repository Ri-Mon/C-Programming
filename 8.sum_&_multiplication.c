/**write a c program to take three integer numbers using a scanf() and find their sum and multiplication
**/

#include<stdio.h>
int main ()
{                                     //---
    int a,b,c;                       //will gain full marks
    scanf("%d %d %d",&a,&b,&c);     //if write down this 4 line
    printf("%d",a+b+c);            //on exm
    printf("%d",a*b*c);           //---

    return 0;
}

/**

 int a,b,c;
printf("enter three integer numbers : ");
scanf("%d %d %d",&a,&b,&c);
printf("%d + %d + % d = %d",a,b,c,a+b+c);
printf("%d x %d x %d",a,b,c,a*b*c);

**/
