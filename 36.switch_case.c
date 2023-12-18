/**
switch in c program : if we have multiple choices.
syntax :
switch(choice)
{
    int choice;
    case1:
         ... ...
         ... ...
    break;
    default :
    //printf("invalid case. please try again.\n");
}
**/

#include<stdio.h>

int main()
{
    int choice;
    printf("enter your choice between 1 to 4 : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("Hello\n");
        break;
        case 2 : printf("Hi\n");
        break;
        case 3 : printf("Welcome\n");
        break;
        case 4 : printf("Everyone\n");
        break;
        default :
            printf("invalid case. please try again.\n");
    }
       return 0;
}
