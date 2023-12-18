/***********************************************************************
write a c program to check an alphabet whether it is VOWEL or CONSONANT.
***********************************************************************/

#include<stdio.h>

int main()

{
    char k;
    while(1)
    {

        printf("enter an alphabet : ");
        scanf(" %c",&k);
        if((k >= 'A' && k <= 'Z') || (k >= 'a' && k <= 'z'))
        {

            switch(k)
            {
            case 'a' :
            case 'A' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :

            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' :
                printf("%c is a VOWEL.\n",k);
                break;
            default:
                printf("%c is CONSONANT.\n",k);

            }

        }

        else printf("invalid input\n");
    }
    return 0;
}
