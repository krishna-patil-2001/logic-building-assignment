// 1. Write  a program which accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
          iFact =  iCnt * iFact;
        }   
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}