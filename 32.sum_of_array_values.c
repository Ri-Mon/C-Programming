#include<stdio.h>
int main()
{
    int x[5]={2,4,5,7,9};
    int i,s=0;
    printf("x[0] = %d\n",x[0]);
    printf("x[1] = %d\n",x[1]);
    printf("x[2] = %d\n",x[2]);
    printf("x[3] = %d\n",x[3]);
    printf("x[4] = %d\n",x[4]);
    for(i=0;i<5;i++)
        s=s+x[i];
    printf("sum = %d",s);
    return 0;
}

