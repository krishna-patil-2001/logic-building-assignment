// 3. Write a program which accept string from user and accept one character . return index of first occurence of that character.

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(*str != '\0')
    {
       if(*str == ch)
       {
         return i;
       }
       str++;
       i++;
    }
    return -1;
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

   iRet = FirstChar(arr,cValue);

   printf("character location is %d",iRet);


    return 0;
}