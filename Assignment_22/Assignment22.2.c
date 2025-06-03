// 2. Accept character from user and check wether it is Capital or not .

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
   if((ch >='A') && (ch <= 'Z'))  
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
        printf("it is Capital character");
    }
    else
    {
        printf("it is not a capital character");
    }

    return 0;
}