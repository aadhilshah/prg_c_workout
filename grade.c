#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float mark;
    printf("Enter your mark:");
    scanf("%f",&mark);
    if (mark>=90&&mark<=100)
    {
        printf("your Grade is:A");
    }
    else if (mark>=80&&mark<=89)
    {
        printf("your grade is:B");
    }
     else if (mark>=70&&mark<=79)
    {
        printf("your grade is:c");
    }
     else if (mark>=60&&mark<=69)
    {
        printf("your grade is:D");
    }
     else if (mark>=50&&mark<=59)
    {
        printf("your grade is:E");
    }
     else if (mark>0&&mark<50)
    {
        printf("You FAILED");
    }
    else 
    {
        printf("enter your valid mark out of 100");
    }
}