#include<stdio.h>
#include<stdlib.h>
int main(void)
{
float mark;
printf("Enter the mark:");
scanf("%f",&mark);
if(mark>=50&&mark<=100)
{
    printf("Congratulation... you passed the exam");
}
else if(mark<50)
{
    printf("you failed.Better luck next time");
}
else{
    printf("Enter your mark out of 100:");
}
}