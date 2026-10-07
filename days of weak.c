#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int day;
    printf("1-sunday\n 2-Monday\n 3-Tuesday\n 4-Wednessday\n 5-Thursday|\n 6-Friday\n Enter your choice:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("SUNDAY");
        break;
        case 2:
        printf("MONDAY");
        break;
        case 3:
        printf("TUESDAY");
        break;
        case 4:
        printf("WEDNESSDAY");
        break;
        case 5:
        printf("THRUSDAY");
        break;
        case 6:
        printf("FRIDAY");
        break;
        default:
        printf("Enter the number from the above list");
    }
}