#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,n=10;
    printf("The number sequence is:");
    for(i=0;i<n;i++)
    {
        if(i==5)
        {
            continue;
        }
        else if (i==8)
        {
            break;
        }
        printf("%d",i);
    } 
}
