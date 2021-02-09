#include<stdio.h>
#include<math.h>
main()
{
    double v,g=9.81,r;
    int t;
    printf("Enter the value of velocity, angle with ground:\n");
    scanf("%lf%d ",&v,&t);
    r=(v*v*sin(2*t))/g;
    printf("The Range of the projectile is: %lf\n", r);
    return 0;
}
