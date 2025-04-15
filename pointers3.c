#include <stdio.h>

// Function to create a pointer array
void createpointerarray(char (*ptr)[20], char *names);

// Function to create a pointer array using a different method
void createpointerarray2(char *ptr[20], char *names);

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names);

int main() {
    // Declare a pointer array
    char (*ptrarray)[20];
    char *ptrarray2[20];
    char names[50];
    char *ptr = names;

    // Take input from main function
    printf("Enter names of the cities (separated by commas): ");
    scanf("%[^,]s", names);

    // Call the functions
    createpointerarray(ptrarray, names);
    createpointerarray2(ptrarray2, names);
    pointerarithmetic(ptr, names);

    return 0;
}

// Function to create a pointer array
void createpointerarray(char (*ptr)[20], char *names) {
    printf("\nOutput from createpointerarray function:\n");
    printf("Address of the full string: %p\n", (void *)names);
    printf("0th position of the string: %c\n", names[0]);
    printf("%p\n", (void *)names);
    printf("%c\n", names[0]);
    printf("%p\n", (void *)&names);
    printf("%s",names);
}

// Function to create a pointer array using a different method
void createpointerarray2(char *ptr[20], char *names) {
    printf("\nOutput from createpointerarray2 function:\n");
    printf("Address of the full string: %p\n", (void *)names);
    printf("0th position of the string: %c\n", names[0]);
    printf("%p\n", (void *)names);
    printf("%c\n", names[0]);
    printf("%p\n", (void *)&names);
    printf("%s\n", names);
}

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names) {
    printf("\nOutput from pointerarithmetic function:\n");
    printf("Address of the full string: %p\n", (void *)names);
    printf("0th position of the string: %c\n", names[0]);
    printf("%p\n", (void *)names);
    printf("%p\n", (void *)&names[0]);
    printf("%p\n", (void *)&names);
    printf("%c\n", *names);
    printf("%s",names);
}