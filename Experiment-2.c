// 1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>
int main() {
    float length, width, area, perimeter;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area = %.2f\nPerimeter = %.2f", area, perimeter);
    return 0;
}


// 2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
#include <stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f", f);
    return 0;
}
