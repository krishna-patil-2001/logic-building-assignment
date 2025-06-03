// 4. Accept character from user and  check wether it is special symbol or not(!,@,#,$,%,^,&,*).

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
       ch == '%' || ch == '^' || ch == '&' || ch == '*'))  
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("it is spcial character");
    }
    else
    {
        printf("it is not a special character");
    }

    return 0;
}