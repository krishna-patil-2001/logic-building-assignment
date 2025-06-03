// 1. Accept character from user and check wether it is alphabet or not (A-Z a-z).

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
   if(((ch >='A') && (ch <= 'Z'))  || ((ch >= 'a') && (ch <= 'z')))
   {
      return TRUE;
   }
   else
   {
    return FALSE;
   }
}

int main()
{ 
    char cValue = '\0';
    int bRet = FALSE;

    
    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is character");
    }
    else
    {
        printf("it is not character");
    }

    return 0;
}