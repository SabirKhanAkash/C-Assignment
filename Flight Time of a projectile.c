#include<stdio.h>
#include<math.h>
main()
{
 double t,f,v,g=9.81;
 printf("Enter the value of velocity and angle with ground in radian:\n");
 scanf("%lf%lf",&v,&t);
 f=(2*v*sin(t))/g;
 printf("The value of flight time is: %lf\n",f);
 return 0;
}

