#include<stdio.h>
int main()
{
    int sum=0,num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num!=0) {
        sum+=num%10;
        num=num/10;
        }
        printf("The sum is: %d\n",sum);
        return 0;
}
