/*1. WAP to read a list of integers and store it in a single dimensional array.
Write a C program to print the second largest integer in a list of integers.*/

#include <stdio.h>

int main() {
    int n, max, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    max=second=a[0];
    for(int i=1; i<n; i++) {
        if(a[i] > max){
            second=max;
            max = a[i];
        }
        else if (a[i]>second && max!=a[i]){
            second=a[i];
        }
    }

    printf("Max = %d, Second largest = %d\n", max, second);
    return 0;
}


/*2. WAP to read a list of integers and store it in a single dimensional array.
Write a C program to count and display positive, negative, odd, and even numbers in an array.*/

#include <stdio.h>

int main(){
    int n, i, pos=0, neg=0, odd=0, even=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++){
        if(a[i]>=0){
            pos++;
        }
        else{
            neg++;
        }

        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf(" Postive= %d\n Negetive=%d\n Even=%d\n Odd=%d\n", pos,neg,even,odd);
    return 0;
}

/*3. WAP to read a list of integers and store it in a single dimensional array.
Write a C program to find the frequency of a particular number in a list of integers.*/

#include <stdio.h>

int main(){
    int n, i, key, frequency=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to find frequency: ");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(a[i]==key){
            frequency++;
        }
    }
    printf("Frecuency of %d=%d\n", key, frequency);
    return 0;
}

/*4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B.
Read matrix A and matrix B in row major order respectively.
Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only.
Program must check the compatibility of orders of the 25 matrices for multiplication. Report appropriate message in case of incompatibility.*/

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;

    // Read size of Matrix A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Read size of Matrix B
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check valid size limits
    if (m > 10 || n > 10 || p > 10 || q > 10) {
        printf("Matrix size exceeds limit (10x10).\n");
        return 0;
    }

    // Read Matrix A
    printf("\nEnter Matrix A (%d x %d) in row-major order:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read Matrix B
    printf("\nEnter Matrix B (%d x %d) in row-major order:\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Print Matrix A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    // Check compatibility
    if (n != p) {
        printf("\nMatrix multiplication NOT possible.\n");
        printf("Columns of A (%d) must equal rows of B (%d).\n", n, p);
        return 0;
    }

    // Multiply matrices: C = A × B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0; // initialize
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Resultant Matrix
    printf("\nResultant Matrix C = A × B (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
