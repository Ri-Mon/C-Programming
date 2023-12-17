/*****************************************************************************
write a c program to take 7 array output from user and find their sum and avg.
*****************************************************************************/

#include<stdio.h>

int main()
{
    int a[7],i;
    printf("Enter 7 numbers :\n");
    for(i = 0; i < 7; i++)
        scanf("%d",&a[i]);
//1:
    int s = 0;
    double avg;
    for(i = 0; i < 7; i++)
    {
        s = s + a[i];
        avg =s / 7.0;
    }

    printf("\n>summation = %d\n>>average = %lf\n",s,avg);

//2:
    double sum = 0,Avg;
    for(i = 0; i < 7; i++)
    {
        sum = sum + a[i];
        Avg = sum / 7;
    }

    printf("\n>>summation = %.0lf\n>>>average = %lf\n",sum,Avg);

//3:
    int SUM = 0;
    double AVG;
    for(i = 0; i < 7; i++)
    {
        SUM = SUM + a[i];
        AVG =(double)SUM/7; //that's called TypeCasting and s being type-casted here.
    }

    printf("\n>>>summation = %d\n>>>>average = %lf\n",SUM,AVG);

    return 0;
}
