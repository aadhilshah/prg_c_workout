#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The even numbers are");
    for(i=2;i<=num;i++)

    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
}