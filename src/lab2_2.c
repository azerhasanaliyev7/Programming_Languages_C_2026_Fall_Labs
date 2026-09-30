#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    int factorial = 1;
    for(int i = 1; i<=n; i++)
        factorial*=i;
    return factorial; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, print result
    if(n<0)
        printf("invalid input!\n");
    else
    {
        n = factorial(n);
        printf("The factorial is: %d\n", n);

    }
    return 0;
}
