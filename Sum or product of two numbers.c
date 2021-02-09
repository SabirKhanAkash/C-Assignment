#include<stdio.h>
main()
{
    int a,b,choice;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Choose an option from below\n");
    printf("1. Sum\n");
    printf("2. Product\n");
    printf("Enter Choice:\n");
    scanf("%d", &choice);
    if(choice == 1) { printf("Sum is %d",a+b); }
    if(choice == 2) { printf("Product is %d",a*b); }
    return 0;
}
