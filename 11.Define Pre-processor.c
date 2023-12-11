/**
programming trick for competition using define pre-processor.
**/

#include<stdio.h>
#define p printf
#define s scanf
#define PI 3.1416
int main ()
{
    float _r,a;
    p("Enter radious = ");
    s("%f",&_r);
    p("Area = %f",PI*_r*_r);

    return 0;
}
