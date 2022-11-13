// Write a C Program to calculate AREA of triangle

#include <stdio.h>
int main()
{
    int base, height;
    float area;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the height: ");
    scanf("%d", &height);

    area = ((float)base * height) / 2;

    printf("Area: %.2f", area);

    return 0;
}