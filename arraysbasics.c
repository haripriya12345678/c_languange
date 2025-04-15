/*#include<stdio.h>
int main()
{
    int i,j,arr[3][4]={{1,2,3,4}, {5,6,7,8},{9,10,11,12}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d",arr[j][i]);
        printf("\n");
    }
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int a[10]={2,-3,4,-5,6,7,1,9,-10,-11};
    int i,j,x,k=0;
    for(i=0;i<10;i++)
    {
        x=a[k];
        if(x<0)
        {
            for(j=k;j<10;j++)
            a[j]=a[j+1];
        a[9]=x;
        }
        else
        k++;
    }
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);
return 0;
}*/






#include<stdio.h>
int func(int arr[],int size);
int main()
{
    int arr[]={2,3,41,4,6,34};
    printf("%d\n",func(arr,6));
    return 0;
}
int func(int arr[],int size)
{
    int m;
    if(size==1)
       return arr[0];
    m=func(arr,size-1);
    if(arr[size-1]<m)
    return arr[size-1];
else
return m;
}