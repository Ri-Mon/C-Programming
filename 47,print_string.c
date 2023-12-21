#include<stdio.h>
int main()
{
//1.1 : with string
char x[100] = "Hello World"; //string
//char x[] = ''Hello World'';
//char x[6] = {'H','E','L','L','O','\0'};
//char x[] = {'H','E','L','L','O','\0'};
printf("%s\n",x);

//1.2 : without string
int index = 0;
while(x[index] != '\0')
{
    printf("%c",x[index]);
    index++;
}

return 0;
}
