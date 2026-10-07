#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The greatest number is :%d",a);
        }
        else{
            printf("The greatest number is :%d",c);
        }
    }
    else{
        if(b>c)
        {
        printf("The greatest number: %d",b);
        }
        else{
            printf("The greatest number is :%d",c);
        }
    }

}