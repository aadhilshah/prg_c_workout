#include<stdio.h>
#include<stdlib.h>
int arr[500],size;
void getArray();
void displayArray();
int main()
{
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the values of arry");
    getArray();
    printf("Entered values are:");
    displayArray();
    return 0;

}
void getArray()
{
    int i;
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
}
void displayArray()
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

}