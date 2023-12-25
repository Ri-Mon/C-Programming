/** Write a C Program to count alphabets,digits,spaces and special characters in a string.
sample : Hello#2022 BD
**/

#include<stdio.h>

int main()
{
    char s[100];
    int alpha = 0, digit = 0, space = 0, special = 0;

    printf("Enter a String : ");
    gets(s); //Hello#2022 BD

    int i = 0;
    while(s[i] != '\0') // if wanna see the taken input : printf("%c", s[i++]);
    {
        if(isalpha(s[i]) != 0 ) // != 0 : alpha is here.
            alpha++;
        else if( isdigit(s[i]) != 0 )
            digit++;
        else if( isspace(s[i]) != 0 )
            space++;
        else
            special++;
        i++;
    }

    printf("Alphabets : %d\n",alpha);
    printf("Digits : %d\n",digit);
    printf("Spaces : %d\n",space);
    printf("Special Characters : %d\n",special);

}

/**
for checking a character input is alphabet or not : isalpha(SingleCharacter)
for checking a character input is digit or not : isdigit(SingleCharacter)
for checking a character input is space or not : isspace(SingleCharacter)
 => they returns 1 if the statement is true(Alpha/Digit/Space);
    => they returns 0 if the statement is False(Not Alpha/Digit/Space);
**/
