#include <stdio.h>
// Function to create a pointer  to  an array
void createpointerTOrarray(char (*ptr)[20], char *names) {
    char *token = names;
    int i = 0;
    while (*token != '\0') {
        if (*token == ',') {
            printf("Address of %c (last element of '%s'): %p\n", *(token-1), names, (void*)(token-1));
            printf("\n");
            names = token + 1;
        }
        token++;
    }
    printf("Address of %c (last element of '%s'): %p\n", *(token-1), names, (void*)(token-1));
}

// Function to create a pointer array using a different method
void createpointerarray(char *ptr[20], char *names) {
    char *token = names;
    int i = 0;
    while (*token != '\0') {
        if (*token == ',') {
            printf("Address of %c (last element of '%s'): %p\n", *(token-1), names, (void*)(token-1));
            printf("\n");
            names = token + 1;
        }
        token++;
    }
    printf("Address of %c (last element of '%s'): %p\n", *(token-1), names, (void*)(token-1));
}

// Function to definition pointerarray
void pointerarray(char *ptr, char *names) {
    char *token = names;
    int i = 0;
    while (*token != '\0') {
        if (*token == ',') {
            printf("Address of %c (last element of '%s'): %p\n", *(token-1), names, (void*)(token-1));
            printf("\n");
            names = token + 1;
        }
        token++;
    }
    //printing the addresss of the given elements
    printf("Address of %c (last element of '%s'): %p\n", *(token-1), names, (void*)(token-1));
}

int main() {
    // Declare a pointer  to array
    char (*ptrarray)[20];
     // Declare a pointer array
    char *ptrarray2[20];
     // Declare a normal array
    char names[50];
    char *ptr = names;

    // Take input from main function from user
    printf("Enter names of the cities (separated by commas): ");
    scanf("%s", names);

    // Call the functions
    createpointerTOrarray(ptrarray, names);
    createpointerarray(ptrarray2, names);
    pointerarray(ptr, names);

    return 0;
}
