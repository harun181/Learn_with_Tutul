// C Program to find lowest number among three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st Number: ");
    scanf("%d", &a);
    printf("Enter the 2nd Number: ");
    scanf("%d", &b);
    printf("Enter the 3rd Number: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("%d is lowest number", a);
    }
    else if (b < a && b < c)
    {
        printf("%d is lowest number", b);
    }
    else
    {
        printf("%d is lowest number", c);
    }

    return 0;
}