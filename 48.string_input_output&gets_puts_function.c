/**
write a c program to read and write your full name.
printf("enter your full name : ");
    scanf("%s",&x);
    printf("%s",x);
gets(CharacterArrayVariable); : takes everything before enter.[used for multiple inputting]
   =>to take input as string.

 puts(CharacterArrayVariable); : always give results with automatically adding new line.
    =>to get output as string
**/

#include<stdio.h>
#include<string.h>
int main()
{
    char x[100]; //string
//1
    printf("enter your full name : ");
    gets(x);
    puts("your name is ");
    puts(x);

    printf("your name is : %s\n",x);

//2
    printf("your name is : ");
    int i=0;
    for(i=0; x[i] != '\0'; i++)
    {
        printf("%c",x[i]);
    }
//3
    printf("\nyour name is : ");
    i = 0;
    while (x[i] != '\0')
    {
        printf("%c",x[i++]);

    }

// Special Case : for using gets after scanf, we need to use "\n" just after the specifier of scanf.
    scanf("%c\n",x);
    gets(x);
    printf("%s",x);

    return 0;
}
