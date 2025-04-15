#include <stdio.h>
// Function to return a pointer to an integer
int* func1(int* x) {
    printf("Value of x: %d\n", *x);
    return x;
}
// Function to return a pointer to an integer (alternative implementation)
int* func2(int* x) {
    printf("Value of x (alternative): %d\n", *x);
    return x;
}
// Function pointer type
typedef int* (*funcPtr)(int*);

// Function to call a function pointer with an argument
void callFuncPtr(funcPtr fp, int* x) {
    int* result = fp(x);
    printf("Result: %d\n", *result);
}
int main() {
    int x = 10;
    // Calling func1 through the function pointer
    printf("Calling func1:\n");
    callFuncPtr(func1, &x);
    // Calling func2 through the function pointer
    printf("Calling func2:\n");
    callFuncPtr(func2, &x);
    return 0;
}

