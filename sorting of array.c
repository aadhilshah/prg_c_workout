#include<stdio.h>
#include<Stdlib.h>
int main(void)
{
    int arr[1000],size,i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the values of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the sorted array is:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }


     
}