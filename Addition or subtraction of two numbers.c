#include<stdio.h>
main()
{
    int a,b,choice;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Choose an option from below\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter Choice:\n");
    scanf("%d", &choice);
    if(a>b) {
    if(choice == 1) { printf("Addition is %d",a+b); }
    if(choice == 2) { printf("Subtraction is %d",a-b); }
    }
    else printf("Answer will not be a positive number\n");
    return 0;
}

