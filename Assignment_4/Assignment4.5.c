// 1. Write  a program which accept number from user and returns diffrence between summation of all factors and non factors.

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
          iSum =  iCnt + iSum;
        }  
         
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}