#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 100
#define MOD 1000000007

typedef enum {
    NO_ERROR,
    OUT_OF_RANGE,
    VALIDATION_ERROR
} FibonacciResult;

FibonacciResult calculateNthFibonacci(int n) {
    if (n < 0 || n > MAX_VALUE)
        return OUT_OF_RANGE;

    long long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    return fib[n] == -1 ? OUT_OF_RANGE : NO_ERROR;
}

FibonacciResult getValidUserInput(int& input) {
    while (1) {
        if (scanf("%d", &input) != 1)
            return VALIDATION_ERROR;

        if (input < 0 || input > MAX_VALUE)
            return OUT_OF_RANGE;
    }
}

void printFibonacciSequence(int n, long long* fib) {
    printf("Fibonacci Sequence up to %d:\n", n);
    for (int i = 0; i < n; i++) {
        if (*fib[i] == -1)
            printf("Note: The input is out of range.\n");
        else
            printf("%lld\n", *fib[i]);
    }
}

void dynamicProgrammingFibonacci(int n, long long* fib) {
    for (int i = 0; i <= n; i++) {
        if (*fib[i] == -1)
            break;

        if (i < MAX_VALUE) {
            *fib[i + 1] = ((*fib[i] + *fib[i + 1]) % MOD);
            // Add memoization here
        }
    }
}

int main() {
    int choice, n = 10;
    long long fib[MAX_VALUE + 1];
    memset(fib, -1, sizeof(fib));

    while (1) {
        FibonacciResult result = calculateNthFibonacci(n);
        if (result == OUT_OF_RANGE)
            printf("Error: Input is out of range.\n");
        else
            result = getValidUserInput(n);

        if (result == VALIDATION_ERROR || result == OUT_OF_RANGE)
            printf("Error: %s\n", "Input validation failed.");
            continue;

        do {
            scanf("%d", &n);
        } while (n < 0 || n > MAX_VALUE);

        // Dynamic programming approach
        dynamicProgrammingFibonacci(n, fib);
        printFibonacciSequence(n, fib);

        if (scanf("%d", &choice) != 1)
            continue;

        handleUserChoice(choice); // Handle user choice and calculate Fibonacci number using dynamic programming.
    }
}

void handleUserChoice(int choice) {
    switch (choice) {
        case 1:
            printf("Note: The nth Fibonacci number cannot be found using binary search.\n");
            printf("Use a more efficient method such as matrix exponentiation or fast doubling algorithm.\n");
            break;

        case 2:
            // No action taken here
            break;

        default:
            printf("Invalid choice!\n");
    }
}