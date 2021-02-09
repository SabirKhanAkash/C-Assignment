#include <stdio.h>
int main()
{
    int num, temp, reminder, reverse=0;
    printf("Enter an integer.\n");
    scanf("%d", &num);
    temp = num;

    while(num > 0)
    {
        reminder=num%10;
        reverse=reverse*10 + reminder;
        num /=10;
    }
    printf("Given number is = %d\n", temp);
    printf("It's reverse is = %d\n", reverse);

    if(num == reverse)
        printf("Entered integer is a palindrome number.\n");
    else
        printf("Entered number is not a palindrome number.\n");

    return 0;
}


