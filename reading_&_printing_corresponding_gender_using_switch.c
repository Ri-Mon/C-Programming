/**
write a c program to read (M/F) and print corresponding gender.
**/

#include<stdio.h>

int main ()
{
    char k;
    while(1)
    {
        printf("enter gender : ");
        scanf(" %c",&k);

        switch(k)
        {
        case 'M' :
        case 'm' :
            printf("Male\n");
            break;
        case 'F' :
        case 'f' :
            printf("Female\n");
            break;

        default :
            printf("unspecified gender.\n");
        }
    }

    return 0;
}
