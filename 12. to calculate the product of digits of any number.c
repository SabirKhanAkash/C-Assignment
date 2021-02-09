#include<stdio.h>
int main()
{
    int long product=1,num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num!=0) {
        product=product*(num%10);
        num=num/10;
        }
        printf("The product is: %d\n",product);
        return 0;
}
