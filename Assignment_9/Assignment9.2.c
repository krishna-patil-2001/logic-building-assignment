// 2. Write a program which accept number from user and check whether it contains 0 in it or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
   
    while(iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit == 0)
       {
        return TRUE;
       }
      iNo = iNo / 10;
    }
     
     return FALSE;
 }

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("there is no zero");
    }

    return 0;
}