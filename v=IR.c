#include<stdio.h>
main()
{
    double v,i,r;
    printf("Enter the value of current and resistance:\n");
    scanf("%lf%lf",&i,&r);
    v=i*r;
    printf("The value of voltage is: %lf\n",v);
    return 0;
}

