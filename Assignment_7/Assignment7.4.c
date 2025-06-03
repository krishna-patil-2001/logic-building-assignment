// 4. Write a program to find odd factorial of given number.

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

   if(iNo < 0)
   {
    iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      if((iCnt % 2) != 0)
      {
        iFact = iCnt * iFact;
      }
   }
 return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even Factorial of nummber is %d",iRet);

    return 0;
}