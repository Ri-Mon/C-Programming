/**

Write a C Program to find the area of a circle.
(and also how to define or declare in c program is listed below)

**/

#include<stdio.h>
#define PI 3.1416      // whenever using constant as variable, it's better to use upper case.
int main ()
{
    float r,area;
    printf("Enter the value of r : ");
    scanf("%f",&r);
    area = PI*r*r;
    printf("\nPI x %.0f x %.0f : %.3f\n",r,r,area); //%.f for no frac after dot.
                                                   //%.1f for one frac after dot.
    return 0;
}

/**
#include<stdio.h>
int main ()

{

  float pi = 3.1416,r,area;    (2)
  .............
  .............
}
or
{
    const float pi 3.1416;     (3)
    float r,area;
    .............
    .............
}
**/
