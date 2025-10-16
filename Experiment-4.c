//1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>

int num = 10;   // global variable

int display() {
    printf("global variable: num = %d\n", num);
}

int modify() {
    num += 10;
    printf("modified variable: num= %d\n", num);
}

int main() {
    display();
    modify();
    display();
    num++;
    display();
    return 0;
}


//2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.
#include <stdio.h>

int globalVar = 50;   // Global variable

int test() {
    int localVar = 10;   // Local variable
    printf("Inside testLocal(): localVar = %d\n", localVar);
    printf("Inside testLocal(): globalVar = %d\n", globalVar);
}

int main() {
    test();
    //printf("%d", localVar); Error: 'localvar' undeclared (first us in this function)
    printf("Inside main(): globalVar = %d\n", globalVar);
    return 0;
}


//3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>

int main() {
    int x = 10;
    { // y is accessible only inside this block
        int y = 20;
        printf("Inside block: x = %d, y = %d\n", x, y);
    }
    //y++;
    //printf("%d", y);  //Error: 'y' undeclared (first use in this function)
    printf("Outside block: x = %d\n", x);
    return 0;
}


//4. Declare a static local variable inside a function. Observe how its value persists across function calls.

