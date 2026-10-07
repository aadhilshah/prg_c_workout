#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i,num,mul;
    printf("Enter the number whoes table is to be displayed:");
    scanf("%d",&num);
    printf("Enter till how multiplicant do you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=i*num;
        printf("%dX%d=%d\n",i,num,mul);


    }
    
}
