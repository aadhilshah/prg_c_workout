#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[1000],sum=0,limt,i;
    printf("Enter the limit:");
    scanf("%d",&limt);
    printf("Enter ther number:");
    for(i=0;i<limt;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum of the array is:%d",sum);  
}