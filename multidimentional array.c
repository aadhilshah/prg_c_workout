#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,values[500][500],limit ;
    printf("Enter the size of multi dimentional array:");
    scanf("%d",&limit);
    printf("Enter the value for array:");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&values[i][j]);
        }
    }
    printf("Entered values are:\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            printf("%d\t",values[i][j]);
        }
        printf("\n");
    }
    return 0;
}