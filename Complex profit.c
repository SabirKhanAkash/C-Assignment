#include<stdio.h>
main()
{
    int i,n,r,p;
    printf("Enter the value of time, rate of profit and main amount of money respectively:\n");
    scanf("%d%d%d",&n,&r,&p);
    printf("The amount of simplex profit is: %d",n*p*(r+1));
    return 0;
}
