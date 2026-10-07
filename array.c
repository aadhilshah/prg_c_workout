#include<stdio.h>
#include<stdlib.h>
int main(void)
{ 
    int a[1000],i,lim;
    printf("enter the array limit:");
    scanf("%d",&lim);
    printf("enter the numbers:");  
    for(i=0;i<lim;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values are:");
    for(i=0;i<lim;i++)
    {
    printf("%d\t",a[i]);
    }

}