/**
write a program to display following series :
A,B,C, ... ... X,Y,Z.
**/

#include<stdio.h>
int main()
{
    char i;//[in char we have to use single quotation.]  //int i;
    for(i = 'A' ; i <= 'Z' ; i++)                       //for (i=65; i<= 90; i++)
        printf("%c\t",i);                              //printf("%d\t",i);
    //see what happens:  printf("%d",i);
    return 0;

}

/**
ASCII Codes :
A = 65 , Z = 90
a = 97 , z = 122
**/
