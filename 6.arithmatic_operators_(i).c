#include<stdio.h>
int main ()
{
    int a,b;
    printf("Input a = ");
    scanf("%d",&a);
    printf("Input b = ");
    scanf("%d",&b);
/** Or,
    printf("Input a & b : ");
    scanf("%d%d",&a,&b);
**/
    printf("\na + b = %d\n\n",a+b);

    printf("%d + %d = %d",a,b,a+b);


    return 0;


}

