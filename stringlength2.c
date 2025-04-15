/*/#include <stdio.h>
#include<string.h>
#define max 20
int createstringlength1(char *str) ;
int createarraylength2(int *array,int size);
int createstringlength3(char *str);
int main() {
    
    char *str1[max];
    int *arr[max];
    char *str2[max];
    int arraysize=sizeof(arr)/sizeof(arr[0]);
    // Take input from main function
    printf("Enter the string1: ");
    for(int i=0;i<max;i++)
    {
    //printf("Enter the string: ");
    scanf(" %s", str1[i]);
    }
    printf("Enter the numbers: ");
    for(int i=0;i<max;i++)
    {
    //printf("Enter the numbers: ");
    scanf(" %d", &arr[i]);
    }
    printf("Enter the string2: ");
    for(int i=0;i<max;i++)
    {
   // printf("Enter the string: ");
    scanf(" %s", str2[i]);
    }
    // Call the functions
    createstringlength1(str1);
    createarraylength2(arr,arraysize);
    createstringlength3(str2);

    return 0;
}
int createstringlength1(char *str) 
{
    int length=0;
       while(*str!='\0')
       {
        length++;
        str++;
       }
       printf("%d",length);
       return 0;
}
int createarraylength2(int *array,int size)
{
    return size;
}
int createstringlength3(char *str)
{
    int length=strlen(str);
    printf("%d",length);
    return length;
}*/
#include <stdio.h>
#include <string.h>
#define MAX 20// Define a constant MAX to represent the maximum size of arrays
int calculateStringLength(char *str) //function definition
{
    int length = 0;
    while (*str != '\0') // Loop until the end of the string is  reached 
    {
        length++;// Increment length for each character
        str++;  // Move to the next character
    }
    return length;// Return the calculated length
}
int calculateArrayLength(int *array, int size) // Function to calculate the length of an array
{
    int arraysize=sizeof(array)/sizeof(array[0]);
    return size;// Return the size of the array
}
int calculateStringLengthUsingStrlen(char *str) // Function to calculate the length of a string using strlen
{
    return strlen(str); // Return the length of the string using strlen
}
int main() {
    char str1[MAX];// Declare a character array to store the first string
    int arr[MAX];// Declare an integer array
   // char str2[MAX];// Declare a character array to store the second string
    printf("Enter the string1: ");
    scanf(" %s", str1);// Read the string using scanf
    printf("Enter the numbers: ");
    for (int i = 0; i < MAX; i++) 
    {
        scanf(" %d", &arr[i]);// Read the number using scanf
    }
    int length1 = calculateStringLength(str1);// Calculate and print the length of the first string
    printf("Length of string1: %d\n", length1);
    int arrayLength = calculateArrayLength(arr, MAX);// Calculate and print the length of the array
    printf("Length of array: %d\n", arrayLength);
    int length2 = calculateStringLengthUsingStrlen(str1);// Calculate and print the length of the second string using strlen
    printf("Length of string2: %d\n", length2);
    return 0;
}
