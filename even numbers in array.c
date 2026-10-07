#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr[1000],i,size,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the values in the array: ");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("position of even numbers in the array is:");
    for(i=0;i<size;i++)
    {
    if(arr[i]%2==0)
    {
        printf("%d\t",i+1);
        count++;
    }
}
printf("\nNumber of even numbers in the given array is :%d",count);
}