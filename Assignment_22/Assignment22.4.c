// 4. Accept character from user and check wether it is small case (a-z) or not .

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
   if((ch >='a') && (ch <= 'z'))  
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("it is small case character");
    }
    else
    {
        printf("it is not a small case character");
    }

    return 0;
}