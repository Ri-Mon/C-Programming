/**user defined function : ddc[declaration,definition and calling],thats easy to reuse.
syntax :
1.function DECLARATION : functionType functionName ();  ex : void hello(); (this one is optional nowadays)
2.function DEFINITION  : functionType functionName ()   ex : void hello(){ ... ... ... }
3.function CALLING     :              functionName ();  ex  : hello();

**/

#include<stdio.h>
void hello();//function declaration/prototype.
int main ()

{
    hello();//function calling.
    return 0;
}
//function definition:
void hello()
{
    printf("Hello everyone.\n");
    printf("Welcome To My Program.\n");
    printf("This is MHR\n");
    printf("From SU,Dhaka.");
}
