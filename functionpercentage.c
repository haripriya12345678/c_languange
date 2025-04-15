#include<stdio.h>
int percentage(int per);
int main()
{
    float physics ,chemistry,biology,maths,computer,result ;
    printf("Enter the marks:");
    scanf("%f %f %f %f %f ",&physics ,&chemistry,&biology,&maths,&computer);
    float n;
    n= physics +chemistry+biology+maths+computer;
    result=(n/500) *100;
    percentage(result);
    return 0;
}
int percentage(int per)
{

    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
     else if(per>=70)
    {
        printf("Grade C");
    }
   else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}