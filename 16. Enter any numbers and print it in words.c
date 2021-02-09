#include<stdio.h>
int main()
{
    int i,num,ch;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for(i=0; ;i++) {
        if(num==i)
            printf("%c",&ch);
    }
    return 0;
}
