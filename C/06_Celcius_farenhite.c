// C program to convert temperature from Fahrenheit to Celsius and vice versa

#include <stdio.h>
int main()
{
    float cl, fh;
    int choice;

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter your temperature in Fahrenheit: ");
        scanf("%f", &fh);
        cl = ((fh - 32) * 5) / 9;
        printf("Your temperature in Celsius: %.2f", cl);
        break;
    case 2:
        printf("Enter your temperature in Celsius: ");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("Your temperature in Fahrenheit: %.2f", fh);
        break;
    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}