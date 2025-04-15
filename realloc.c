/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pa,*pb,n;
    pa=(int *)malloc(10 *sizeof(int));
    if(pa)
    {
        printf("%u bytes allocated storing integers :", 10*sizeof(int));
        for(n=0;n<10;++n)
        printf("%d",pa[n]=n);
    }
    pb = (int *)realloc(pa,100 *sizeof(int));
    if(pb)
    {
        printf("\n%u bytes are allocated, after the first 10 integres are:",100*sizeof(int));
        for(n=10;n<110;++n)
            printf("%d",pb[n]=n);
        for(n=0;n<110;++n)
            printf("%d",pb[n]);
        free(pb);
    }
    else
    {
    free(pa);
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declare variables
    int *marks; // Pointer to store marks
    int total_marks = 0; // Total marks
    float percentage; // Percentage
    int n = 4; // Number of members

    // Allocate memory for 10 members' marks using malloc
    marks = (int*)malloc(n * sizeof(int));
    // Check if memory allocation is successful
    if (marks == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    // Input marks for 10 members
    printf("Enter marks for %d members:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Member %d: ", i + 1);
        scanf("%d", &marks[i]);
        total_marks += marks[i]; // Calculate total marks
    }
    // Reallocate memory to increase the number of members
    n = 8;
    marks = (int*)realloc(marks, n * sizeof(int));
    // Check if memory reallocation is successful
    if (marks == NULL) {
        printf("Memory reallocation failed\n");
        return -1;
    }
    // Input marks for additional members
    printf("Enter marks for additional %d members:\n", n - 10);
    for (int i = 5; i < n; i++) {
        printf("Member %d: ", i + 1);
        scanf("%d", &marks[i]);
        total_marks += marks[i]; // Calculate total marks
    }
    // Calculate percentage
    percentage = (float)total_marks / n;
    // Display results
    printf("Total marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    // Free allocated memory
    free(marks);
    return 0;
}