#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr[1000],limit,i,search_key,flag=0;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("Enter the value:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("please enter the search key:");
    scanf("%d",&search_key);
    printf("Result:");
    for(i=0;i<limit;i++)
    {
    if(arr[i]==search_key)
    {
        flag=1;
        printf("%d\n",i+1);
        break;
    }
}
if(flag==1)
{
    printf("search_key is in the list\n");   
}
else{
    printf("null");
    printf("\nsearch key not found");

}




     
}