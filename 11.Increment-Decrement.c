/**
increment operator : ++ ( value of x is incremented by 1 ) [ x++ | x = x + 1 | x += 1 ]
           x++ (post increment)
           ++x (pre increment)
decrement operator : -- (value of x is decremented by 1 ) [ x-- | x = x - 1 | x -= 1 ]
           x-- (post decrement)
           --x (pre decrement)
**/
#include<stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x); //10
    printf("%d\n",x++); //10 11  [10printed on display & 11updated in memory]
    printf("%d\n",x);     //just for proving upper statement
    printf("%d\n",++x); //12
    printf("%d\n",x--); //12 11
    printf("%d\n",--x); //10
    return 0;
}

/**
incremented by 2 : x = x + 2 | x += 2
decremented by 2 : x = x - 2 | x -= 2
**/

