/**
display this :
input : 123     output : 321.
**/

#include<stdio.h>
int main()
{
    int n,r; //r means remainder
    printf("enter a number : ");
    scanf("%d",&n);
    printf("reverse number : ");

    while(n!=0)
    {
        r=n%10;
        printf("%d",r); //321
        n=n/10; //12  1  0
    }
    return 0;
}

/**
10 ) 123 ( 12
     120
    .....
       3=r
10 ) 12 ( 1
     10
   .....
      2
10 ) 1 ( 0
     0
   .....
     1
**/
