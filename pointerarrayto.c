#include <stdio.h>

// Function to create a pointer array
char createpointerarray(char (*ptr)[20]);

// Function to create a pointer array using a different method
char createpointerarray2(char *ptr[20]);

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names);

int main() {
    // Declare a pointer array
    char (*ptrarray)[20];

    // Call the first function
    createpointerarray(ptrarray);

    // Declare another pointer array
    char *ptrarray2[20];

    // Call the second function
    createpointerarray2(ptrarray2);

    // Declare variables for pointer arithmetic
    char names[50];
    char *ptr = names;

    // Call the third function
    pointerarithmetic(ptr, names);

    return 0;
}

// Function to create a pointer array
char createpointerarray(char (*ptr)[20]) {
    char names[50];
    ptr = &names;
    int i;
    printf("Enter names of the cities (separated by commas): ");
    scanf("%[^,]s", names);
    for (i = 0; names[i] != 0; i++) {
        printf("%c", names[i]);
    }
    printf("\n");
    printf("0th position of the string: %c\n", names[0]);
    printf("%p\n", (void *)ptr);
    printf("%c\n", *ptr);
    printf("%p\n", (void *)&ptr);
    printf("%c\n", *names);
    printf("%p\n", (void *)&names);
    return 0;
}

// Function to create a pointer array using a different method
char createpointerarray2(char *ptr[20]) {
    char names[50];
    *ptr = names;
    int i;
    printf("Enter names of the cities (separated by commas): ");
    scanf("%[^,]s", names);
    for (i = 0; names[i] != 0; i++) {
        printf("%c", names[i]);
    }
    printf("\n");
    printf("0th position of the string: %c\n", names[0]);
    printf("%p\n", (void *)ptr);
    printf("%c\n", *ptr[0]);
    printf("%p\n", (void *)&ptr);
    printf("%c\n", *names);
    printf("%p\n", (void *)&names);
    printf("%p\n", (void *)&ptr);
    printf("%s\n", names[0]);
    return 0;
}

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names) {
    int i;
    printf("Enter names of the cities: ");
    scanf("%s", names);
    for (i = 0; names[i] != 0; i++) {
        printf("%c", names[i]);
    }
    printf("\n");
    printf("0th position of the string: %c\n", names[0]);
    printf("%p\n", (void *)ptr);
    printf("%p\n", (void *)&names[i]);
    printf("%p\n", (void *)&ptr);
    printf("%c\n", *ptr);
    printf("%p\n", (void *)&ptr[0]);
    printf("%p\n", (void *)&names[0]);
}