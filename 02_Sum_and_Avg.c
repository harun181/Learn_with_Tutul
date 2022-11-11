//C program to find Sum and Average of two numbers

#include <stdio.h>
int main()
{
    int a, b, sum;
    float avg;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    avg = (float)sum / 2;

    printf("Sum: %d\n", sum);
    printf("Average: %f", avg);

    return 0;
}