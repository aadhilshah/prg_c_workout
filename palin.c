#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char word[500] ;
    int length,i,ispalindrome=0;
    printf("Enter the  word: ");
    scanf("%s",word);
    length=strlen(word);
    for(i=0;i<length/2;i++)
    {
        if(word[i]==word[length-i-1])
        {
            ispalindrome=1;
            break;
        }

    }
    if(ispalindrome==1)
    {
        printf("The word %s is palindrome",word);
    }
    else{
        printf("The word %s is not a palidrome",word);
    }


}
