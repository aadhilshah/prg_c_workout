#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int choice;
    printf("Welcome to the hotel!!!\n");
    printf("MENU\n 1-porotta\n 2-biriyani\n 3-Fried Rice \n 4-Mandi\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("your order id porotta");
        break;
        case 2:
        printf("Your order is biriyani");
        break;
        case 3:
        printf("YOur order is Fried Rice");
        break;
        case 4:
        printf("your order is Mandi");
        break;
        default:
        printf("your order is not in the menu");
    }
}