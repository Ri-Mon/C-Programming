/**write a c program to perform following operation :
1.addition.
2.subtraction.
3.multiplication.
4.division.
5.find the area of a circle.
6.find the square of a number.
7.show multiplication table.
**/
#include<stdio.h>
void menu();
void add();
void sub();
void multi();
void div();
void area();
void square();
void table ();
int main ()

{
    int c;
    menu();
    while (1)
    {
        printf("enter your choice : ");
        scanf("%d",&c);

        switch(c)
        {
        case 1 :
            add();
            break;
        case 2 :
            sub();
            break;
        case 3 :
            multi();
            break;
        case 4 :
            div();
            break;
        case 5 :
            area();
            break;
        case 6 :
            square();
            break;
        case 7 :
            table ();
            break;
        case 0 :
            exit (0);
            break;
        default :
            printf("invalid choice.please try again.\n");
        }

    }
    return 0;
}
//function definition of menu :
void menu()
{

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("1. addition.\n");
    printf("2. subtraction.\n");
    printf("3. multiplication.\n");
    printf("4. division.\n");
    printf("5. find the area of a circle.\n");
    printf("6. find the square of a number.\n");
    printf("7. show multiplication table.\n");
    printf("0. exit.\n");
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
}
//function definition of addition :
void add()
{
    int x,y;
    printf("1.enter x and y : ");
    scanf("%d%d",&x,&y);
    printf("sum = %d\n",x+y);
}
//function definition of subtraction :
void sub()
{
    int x,y;
    printf("2.enter x and y : ");
    scanf("%d%d",&x,&y);
    printf("sub = %d\n",x-y);
}
//function definition of multiplication :
void multi()
{
    int x,y;
    printf("3.enter x and y : ");
    scanf("%d%d",&x,&y);
    printf("%d x %d = %d\n",x,y,x*y);
}
//function definition of division :
void div()
{
    int x,y;
    printf("4.enter x and y : ");
    scanf("%d%d",&x,&y);
    printf("%d / %d = %d\n",x,y,x/y);
}
//function definition of area :
void area()
{
    float const PI = 3.1416;
    float r,area;
    printf("5.enter radius : ");
    scanf("%f",&r);
    printf("area of a circle is = %f\n",PI*r*r);
}
//function definition of square :
void square()
{
    int a,z;
    printf("6.enter a number  : ");
    scanf("%d",&a);
    z = pow(a,2);
    printf("square of %d is = %d\n",a,z);
}
//function definition of table :
void table()
{
    int n,i,z;
    printf("7.enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        z = n*i;
        printf("%d x %d = %d\n",n,i,z);
    }
}

