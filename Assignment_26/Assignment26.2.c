// 2. Write a program which accept string from user and accept one character . return frequency of that character.

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
       if(*str == ch)
       {
        iCount++;
       }
       str++;
    }
    return iCount;

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

   iRet = CountChar(arr,cValue);

   printf("character frequency is %d",iRet);


    return 0;
}