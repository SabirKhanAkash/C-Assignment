#include <stdio.h>
int main()
{
    int n, first,last;
    printf("Enter any number: ");
    scanf("%d", &n);
    first = n;
    last= n%10;
    while(first >= 10)
    {
        first = first / 10;
    }
    printf("First digit = %d\n", first);
    printf("Last digit = %d\n",last);
    printf("The Sum is: %d\n",first+last);
    return 0;
}
