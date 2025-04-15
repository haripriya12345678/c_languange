/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int  *pdata;
    printf("amount of numbers to be entered:");
    scanf("%d",&n);
    pdata = (int *)calloc(n,sizeof(int));
    if(pdata == NULL) exit(1);
    for(i=0;i<i;i++)
    {
        printf("Enter number %d",i+1);
        scanf("%d",&pdata[i]);
    }
    printf("You have entered:");
    for(i=0;i<n;i++)
    printf("%d",pdata[i]);
free (pdata);
return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declare variables
    int *marks; // Pointer to store marks
    int total_marks = 0; // Total marks
    float percentage; // Percentage
    // Allocate memory for 10 members' marks using calloc
    marks = (int*)calloc(10, sizeof(int));
    // Check if memory allocation is successful
    if (marks == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    // Input marks for 10 members
    printf("Enter marks for 10 members:\n");
    for (int i = 0; i < 10; i++) {
        printf("Member %d: ", i + 1);
        scanf("%d", &marks[i]);
        total_marks += marks[i]; // Calculate total marks
    }
    // Calculate percentage
    percentage = (float)total_marks / 10;
    // Display results
    printf("Total marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    // Free allocated memory
    free(marks);

    return 0;
}
