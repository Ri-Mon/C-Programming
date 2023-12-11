#include<stdio.h>
int main ()
{
    int a,b,sum,sub,multi,div,mod;
    printf("Enter a & b = ");
    scanf("%d%d",&a,&b);

    sum = a+b;        //.........
    sub = a-b;       //executable
    multi = a*b;    //statement
    div = a/b;     //............
    mod = a%b;    //

    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d x %d = %d\n",a,b,multi);
    printf("%d / %d = %d\n",a,b,div);
    printf("%d %% %d = %d\n",a,b,mod);

    return 0;

}
