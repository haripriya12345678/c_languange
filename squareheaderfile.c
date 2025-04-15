#include<stdio.h>//preprocessor for input and output
#include"square.h"//user-defined preprocessor
int square1(int a);//gobal declaration(function declaration)
int square2(double a);//gobal declaration(function declaration)
double square3(int a);//gobal declaration(function declaration)
double square4(double a);//gobal declaration(function declaration)
int main()//main function
{
    double x=2.5,y;//declaration and intillization of the values using double datatype 
    y=square1(x);//assign the function calling value to the y
    printf("%lf\t",y);//using formate specifier %lf (double float)
    y=square2(x);//function calling
    printf("%lf\t",y);//printing the result
    y=square3(x);//function calling
    printf("%lf\t",y);//printing the result
    y=square4(x);//function calling
    printf("%lf\t",y);//printing the result
    return 0;
}