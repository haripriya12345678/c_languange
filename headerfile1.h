int  sumseries(int num1)
{
    int sum;
    if(num1==0)
         return 0;
    sum= num1+sumseries(num1-1);
    return sum;
    printf("%d\n + ",sum);
}
int mulseries(int num2)
{
    int mul;
    if(num2==0)
    return 1;
    mul= num2*mulseries(num2-1);
    return mul;
    printf("%d\n  ",mul);
}
int divseries(int num3)
{
    int div;
    if(num3==0)
    return 1;
div =num3/divseries(num3-1);
return div;
printf("%d\n  ",div);

}