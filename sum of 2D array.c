#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j,size,arr1[100][100],arr2[100][100],sum[100][100];
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the values for arr1:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter the values for arr2:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of array is :\n");
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        } 
    }
     for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
}
return 0;
}