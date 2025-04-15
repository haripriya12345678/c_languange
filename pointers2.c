/*#include <stdio.h>

// Function to create a pointer array
void createpointerarray(char *ptr);

// Function to create a pointer array using a different method
void createpointerarray2(char *ptr[20]);

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names);

int main() {
    // Declare a pointer array
    char names[50];
    char *ptrarray = names;
    char *ptrarray2[20];

    // Take input from main function
    printf("Enter names of the cities (separated by commas): ");
    scanf("%[^,]s", names);

    // Call the functions
    createpointerarray(ptrarray);
    createpointerarray2(ptrarray2);
    pointerarithmetic(ptrarray, names);

    return 0;
}

// Function to create a pointer array
void createpointerarray(char *ptr) {
    printf("\nOutput from createpointerarray function:\n");
    printf("Address of the full string: %p\n", (void *)ptr);
    printf("0th position of the string: %c\n", ptr[0]);
    printf("1st position of the string: %c\n", ptr[1]);
}

// Function to create a pointer array using a different method
void createpointerarray2(char *ptr[20]) {
    printf("\nOutput from createpointerarray2 function:\n");
    printf("Address of the full string: %p\n", (void *)ptr);
    printf("0th position of the string: %c\n", (*ptr)[0]);
    printf("1st position of the string: %c\n", (*ptr)[1]);
}

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names) {
    printf("\nOutput from pointerarithmetic function:\n");
    printf("Address of the full string: %p\n", (void *)ptr);
    printf("0th position of the string: %c\n", ptr[0]);
    printf("1st position of the string: %c\n", ptr[1]);
}*/
#include <stdio.h>
#include <string.h>

// Function to create a pointer array
void createpointerarray(char *ptr,int i);

// Function to create a pointer array using a different method
void createpointerarray2(char *ptr[20],char *names,int i);

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names,int i);

int main() {
    // Declare a pointer array
    char names[50];
    char *ptrarray = names;
    char *ptrarray2[20];

    // Take input from main function
    printf("Enter names of the cities (separated by commas): ");
    scanf("%[^,]s", names);

    // Call the functions
    createpointerarray(ptrarray);
    createpointerarray2(ptrarray2,names);
    pointerarithmetic(ptrarray, names);

    return 0;
}

// Function to create a pointer array
void createpointerarray(char *ptr,int i) {
    printf("\nOutput from createpointerarray function:\n");
    printf("Address of the full string: %p\n", (void *)ptr[i]);
    printf("0th position of the string: %c\n", *ptr);
    printf("1st position of the string: %c\n", *(ptr+1));
    printf("Full String: %s\n", ptr);
}

// Function to create a pointer array using a different method
void createpointerarray2(char *ptr[20],char *names) {
    printf("\nOutput from createpointerarray2 function:\n");
    printf("Address of the full string: %p\n", (void *)ptr);
    printf("0th position of the string: %c\n", names[0]);
    printf("1st position of the string: %c\n", names[1]);
    printf("Full String: %s\n", names);
}

// Function to demonstrate pointer arithmetic
void pointerarithmetic(char *ptr, char *names) {
    printf("\nOutput from pointerarithmetic function:\n");
    printf("Address of the full string: %p\n", (void *)ptr);
    printf("0th position of the string: %c\n", *ptr);
    printf("1st position of the string: %c\n", *(ptr+1));
    printf("Full String: %s\n", ptr);
}