#include<stdio.h>
#include<stdlib.h>
int sum();
int main()
{
    int result;
    result=sum();
    printf("The sum of numbers is :%d",result);
    return 0;

}
int sum()
{
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;

}