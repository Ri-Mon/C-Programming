/**
logical operators :
&& [both side of && will be true nor the ans will be false.]
|| [only one side of || will be true nor the ans will be false.]
!
**/

#include<stdio.h>
int main()
{
    int m; // m means marks.
    while(1) //for debugging purpose,we can use while loop. here's 1 means "true".
    {
        printf("enter your marks : ");
        scanf("%d",&m);
        if(m>100 || m<0) printf("invalid marks.please try again.\n"); ///for only if: if the statement is true then we'll get the result nor nothing will be displayed.
        else if(m>=80) printf("A+\n");
        else if(m>=70) printf("A\n");
        else if(m>=60) printf("A-\n");
        else if(m>=50) printf("B\n");
        else if(m>=40) printf("C\n");
        else if(m>=33) printf("D\n");
        else           printf("F\n");
    }
        return 0;


}

