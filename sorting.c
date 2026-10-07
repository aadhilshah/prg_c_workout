#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int limit ,arr[1000],i,j,temp;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("Enter the numbers:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("The sorted values are:");
    for(i=0;i<limit;i++)
    {
    printf(" %d\t",arr[i]);
    } 
    
    
}