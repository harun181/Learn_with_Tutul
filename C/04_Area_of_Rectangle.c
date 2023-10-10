// C Program to calculate the AREA of rectangle

#include <stdio.h>
int main()
{
    int height, width, area;
    printf("Enter the height: ");
    scanf("%d", &height);
    printf("Enter the width: ");
    scanf("%d", &width);

    area = height * width;

    printf("Area: %d", area);

    return 0;
}