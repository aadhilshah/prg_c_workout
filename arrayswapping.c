#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr1[1000],size,i,temp,arr2[1000];
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("\nEnter the values of array 1: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n Enter the value of array 2: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Array after swapping:\n");
    for(i=0;i<size;i++)
    {
    temp=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
    }
    printf("Array1: ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nArray2: ");
    for(i=0;i<size;i++)
    {
    printf("%d\t",arr2[i]);
    }
}