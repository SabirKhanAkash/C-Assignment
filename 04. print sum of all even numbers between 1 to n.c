#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2) {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
