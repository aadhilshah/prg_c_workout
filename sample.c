#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,sum;
    printf("\nEnter the number:\n");
    scanf("%d",&a);
    printf("\nYou have entered a as %d\n",a);
    printf("\nEnter the number:\n");
    scanf("%d",&b);
    printf("\nYou have entered b as: %d\n",b);
    sum=a+b;
    printf("\nthe sum of number is: %d\n",sum);
}