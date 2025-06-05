// 4. Write a program which accept string from user and accept one character . return index of last occurence of that character.

#include<stdio.h>

int LastChar(char *str, char ch)
{
   int i = 0;
    int lastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            lastIndex = i;  
        }
        str++;
        i++;
    }
    return lastIndex; 
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;
   

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

   iRet = LastChar(arr,cValue);

   printf("character location is %d",iRet);


    return 0;
}