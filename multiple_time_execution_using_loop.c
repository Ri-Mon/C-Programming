#include <stdio.h>
int main()
{
    int a,b,z;
    char k;
    do
    {
        printf("enter two numbers : ");
        scanf("%d %d",&a,&b);
        z = a + b;
        printf("%d + %d = %d",a,b,z);

        printf("\nwanna do again?");
        scanf(" %c",&k); //Space needed before %c here.
    }
    while(k=='y' || k =='Y');
    return 0;
}
