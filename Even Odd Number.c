#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a%2==0) printf("It is an Even number\n");
    else printf("It is an Odd number\n");
    return 0;
}
