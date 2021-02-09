#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++) {
        if(n%i==0)
            flag=1;
            break;
    }
    if(flag==0)
        printf("The number is a prime number\n");
    else printf("The number is not a prime number\n");
    return 0;
}
