/**
write a menu driven program to perform the following operations :
1.Addition.
2.Subtraction.
3.Multiplication.
4.Division.
5.Modulus.
6.Display numbers from 1 to 10.
7.Display alphabets from A to Z.
8.Find the square of a number
9.Find the square of a number using pow() function.
10.Find the square-root of a number using sqrt() function.
**/

#include<stdio.h>
int main()

{
    //while(1)
    printf(">>>>>>>>>>>>>>>><<<<<<<<<<<<\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modulus\n");
    printf("6.Display numbers from 1 to 10.\n");
    printf("7.Display alphabets from A to Z.\n");
    printf("8.Square of a number\n");
    printf("9.Square of a number using pow() function.\n");
    printf("10.Square-root of a number using sqrt() function.\n");
    printf("0.Exit the program.\n");
    printf(">>>>>>>>>>>>>>>><<<<<<<<<<<<\n");

    int c;

    while(1)
    {
        printf("\nenter your choice from aforementioned options : ");
        scanf("%d",&c);
        int a,b,z,i;
        float n,y;
        switch(c)
        {
        case 1 :
            printf("enter two numbers : ");
            scanf("%d%d",&a,&b);
            z=a+b;
            printf("%d + %d = %d\n",a,b,z);
            break;
        case 2 :
            printf("enter two numbers : ");
            scanf("%d%d",&a,&b);
            z=a-b;
            printf("%d - %d = %d\n",a,b,z);
            break;

        case 3 :
            printf("enter two numbers : ");
            scanf("%d%d",&a,&b);
            z=a*b;
            printf("%d x %d = %d\n",a,b,z);
            break;
        case 4 :
            printf("enter two numbers : ");
            scanf("%d%d",&a,&b);
            z=a/b;
            printf("%d / %d = %d\n",a,b,z);
            break;
        case 5 :
            printf("enter two numbers : ");
            scanf("%d%d",&a,&b);
            z=a%b;
            printf("%d %% %d = %d\n",a,b,z);
            break;
        case 6 :
            for(i=1; i<=10; i++)
                printf("%d\t",i);
            break;
        case 7 :
            i = 'A';
            while(i <= 'Z')
            {
                printf("%c\t",i);
                i++;
            }

            break;

        case 8 :
            printf("enter a number : ");
            scanf("%d",&a);
            z=a*a;
            printf("Square of %d is %d\n",a,z);

            break;
        case 9 :
            printf("enter a number : ");
            scanf("%d",&a);
            z=pow(a,2);
            printf("Square of %d is %d\n",a,z);
            break;
        case 10 :
            printf("enter a number : ");
            scanf("%f",&n);
            y = sqrt(n);
            printf("Square-root of %f is %f\n",n,y);
            break;
        case 0 :
            exit(0);
            break;
        default :
            printf("\ninvalid case. please try again.");
        }
    }
    return 0;
}
