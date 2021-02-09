#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    while(n>1) {
        n--;
        printf("%d\n",n);
        }
    return 0;
}
