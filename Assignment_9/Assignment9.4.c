// 4. Write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>

int Countfour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
          iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Countfour(iValue);

    printf("%d",iRet);

    return 0;
}