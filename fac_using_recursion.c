#include <stdio.h>

// Function to find the factorial of a number using recursion
long factorial(int n) {
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}
