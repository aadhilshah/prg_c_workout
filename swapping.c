#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,temp;
    printf("Enter the value for a:\n");
    scanf("%d",&a);
    printf("Enter the value for b:\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;  
    printf("the swapped value are : a:%d  b:%d",a,b);

}