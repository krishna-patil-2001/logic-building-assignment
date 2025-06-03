// 3. Accept character from user and check wether it is digit or not (0 - 9).

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
   if((ch >= 48)  &&  (ch <= 57))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is Digit");
    }
    else
    {
        printf("it is not a Digit");
    }

    return 0;
}