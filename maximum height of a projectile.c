#include<stdio.h>
main()
{
    int t;
    double v,g=9.81,h;
    printf("Enter the value of the velocity & angle with the ground:\n");
    scanf("%lf%d",&v,&t);
    h=((v*v)*(sin(t)*sin(t)))/(2*g);
    printf("The value of the maximum height is: %lf\n",h);
    return 0;
}
