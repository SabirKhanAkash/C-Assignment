#include<stdio.h>
int main()
{
    int a,b,x,y,t,gcd,lcm;
    printf("Enter two integers:\n");
    scanf("%d%d",&x,&y);
    a=x,b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a-t;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("GCD of %d and %d is: %d\n",x,y,gcd);
    return 0;
}


