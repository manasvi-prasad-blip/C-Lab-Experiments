// 1. Write a C program to print “Hello World”.
#include <stdio.h>
int main() {
    printf("Hello World");
    return 0;
}

// 2. Write a C Program to print the address in multiple lines (new line).
#include <stdio.h>
int main() {
    printf("Block-D/502, Jhajra\nDehradun \nUttrakhand\nIndia");
    return 0;
}

// 3. Write a program that prompts the user to enter their name and age.
#include <stdio.h>
int main() {
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Name: %s\nAge: %d", name, age);
    return 0;
}

// 4. Write a C program to add two numbers, take number from user.
#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}

