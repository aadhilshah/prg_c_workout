#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num,i,flag=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("The number is not prime");
        return 0;
    }
    for(i=2;i<=num/2;i++)
    {
        
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Its prime number");
    }
    else{
        printf("its not a prime");
    }
}