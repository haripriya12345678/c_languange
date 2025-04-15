#include <stdio.h> 
#include <stdlib.h> 
 
// Define the vector structure 
typedef struct { 
    int *data;      // Pointer to the array of elements 
    size_t size;    // Current number of elements 
    size_t capacity; // Maximum number of elements before resizing 
} Vector; 
 
// Function to initialize the vector 
void vector_init(Vector *v) { 
    v->size = 0; 
    v->capacity = 4; // Initial capacity 
    v->data = malloc(v->capacity * sizeof(int)); 
} 
 
// Function to add an element to the vector 
void vector_push_back(Vector *v, int value) { 
    if (v->size == v->capacity) { 
        v->capacity *= 2; // Double the capacity 
        v->data = realloc(v->data, v->capacity * sizeof(int)); 
    } 
    v->data[v->size++] = value; // Add the new element and increment size 
} 
 
// Function to free the vector 
void vector_free(Vector *v) { 
    free(v->data); 
} 
 
int main() { 
    Vector v; 
    vector_init(&v); 
 
    for (int i = 0; i < 10; i++) { 
        vector_push_back(&v, i); 
    } 
 
    for (size_t i = 0; i < v.size; i++) { 
        printf("%d ", v.data[i]); 
    } 
    printf("\n"); 
 
    vector_free(&v); 
    return 0; 
} 
