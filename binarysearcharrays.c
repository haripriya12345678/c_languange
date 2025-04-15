#include<stdio.h>
#define max 50/* marco define */
int binarysearch(int array[],int size,int target_item);/* function decleration*/
int main()
{
    int i,size,target_item,array[max],index_value;/* intillization  and decleration of user inputs*/

    printf("Enter the number of elements :");/* reading input size  from the user*/
    scanf("%d",&size);

    printf("Enter the elements in the order:");/* reading input array element  from the user*/
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);

    printf("Enter the target item in the order:");/* reading input traget_item  from the user*/
    scanf("%d",&target_item);

    index_value=binarysearch(array,size,target_item);/* function calling */

    if(index_value==-1)

     printf("%d value is not found in the given array \n",target_item);/*printing the result if traget_item is not found*/
   else
    printf("%d value is  found in the given array %d \n",target_item,index_value);/*printing result*/
return 0;

}
int binarysearch(int array[],int size,int target_item)
{
    int last_value=0,first_value=size-1,search_middle;/* intillization  and decleration*/

    while(last_value<=first_value)
    {
        search_middle = (last_value+first_value) /2;

        if(target_item >array[search_middle])/*search for right side*/
                  last_value=search_middle+1;

        else if (target_item <array[search_middle])/* search for right*/ 
                 first_value=search_middle-1;

        else
        return search_middle;/* found the traget_item*/

    }
    return -1;/* not found traget_item*/
}