// C Program To calculate area and circumference of the circle

#include <stdio.h>
int main()
{
    float area, cir, radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    cir = 2 * 3.1416 * radius;

    printf("Area: %f\n", area);
    printf("Circumference: %f", cir);

    return 0;
}