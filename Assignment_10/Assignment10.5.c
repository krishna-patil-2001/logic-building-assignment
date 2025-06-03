 // 5. Write a program which accept number from user and return diffrence between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEvendiGits = 0;
    int iSumOdddiGits = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumEvendiGits = iDigit + iSumEvendiGits;
        }
        else
        {
            iSumOdddiGits = iDigit + iSumOdddiGits;
        }
        iNo = iNo / 10;
    }
    return iSumEvendiGits - iSumOdddiGits;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}