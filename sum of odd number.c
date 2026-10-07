#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, lim,sum=0;
    printf("Enter the limit:");
    scanf("%d",&lim);
    printf("The odd numbers are:");
    for(i=1;i<=lim;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            sum=sum+i;
            
           
        }

    }
    printf("\n The sum  of odd numbers are:");
     printf("%d",sum);
     return 0;
}