// 1. WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Equilateral triangle");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle");
        else if (fabs(a * a + b * b - c * c) < 0.0001 ||
                 fabs(a * a + c * c - b * b) < 0.0001 ||
                 fabs(b * b + c * c - a * a) < 0.0001)
            printf("Right angled triangle");
        else
            printf("Scalene triangle");
    } else
        printf("Triangle is not valid");
    return 0;
}


// 2. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI = weight(kgs)/(Height(mts)*Height(mts)).
#include <stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("BMI = %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Underweight");
    else if (bmi >= 18.5 && bmi < 25)
        printf("Normal weight");
    else if (bmi >= 25 && bmi < 30)
        printf("Overweight");
    else
        printf("Obese");
    return 0;
}


// 3. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
int main() {
    float x1, y1, x2, y2, x3, y3, area;
    printf("Enter coordinates of first point: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of third point: ");
    scanf("%f %f", &x3, &y3);
    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
    if (area == 0)
        printf("Points are collinear");
    else
        printf("Points are not collinear");
    return 0;
}


// 4. According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
#include <stdio.h>
int main() {
    int year, day;
    printf("Enter year: ");
    scanf("%d", &year);
    day = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    switch (day) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
        default: printf("Error");
    }
    return 0;
}


// 5. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>
int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;
    printf("Enter length and breadth of first rectangle: ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length and breadth of second rectangle: ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of third rectangle: ");
    scanf("%d %d", &l3, &b3);
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);
    max = (p1 > p2 && p1 > p3) ? p1 : (p2 > p3 ? p2 : p3);
    printf("Highest Perimeter = %d", max);
    return 0;
}

