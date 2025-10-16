// 1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include <stdio.h>
int main() {
    int num, pos = 0, neg = 0, zero = 0, choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
        printf("Do you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    } while (choice == 1);
    printf("Positive numbers: %d\nNegative numbers: %d\nZeroes: %d", pos, neg, zero);
    return 0;
}


// 2. WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting. Num * 1 = Num
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}


// 3. WAP to generate the following set of output.
// 3(a).
//     1
//    2 3
//   4 5 6
#include <stdio.h>
int main() {
    int i, j, k, num = 1;
    for (i = 1; i <= 3; i++) {
        for (k = 3; k > i; k--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

// 3(b).
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
#include <stdio.h>
int main() {
    int n = 5, i, j, k;
    for (i = 0; i < n; i++) {
        for (k = n; k > i; k--) {
            printf(" ");
        }
        int val = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
