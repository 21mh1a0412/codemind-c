#include<stdio.h>
int main ()
{
    int a,b;
    //printf("enter two values");
    scanf("%d",&a);
    scanf("%d",&b);
    /* lcm is always graterthen or equal to the-
       maxium of the given to numbers
     */
    int lcm=(a>b)?a:b;
    //loop until divisible by both
    while(1)
    {
        if(lcm%a==0&&lcm%b==0)
        break;
        lcm++;
    }
    // output the lcm
    printf("%d",lcm);
    return 0;
}