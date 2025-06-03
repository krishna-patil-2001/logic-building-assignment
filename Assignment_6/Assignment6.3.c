// 3. Write a program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
   int iCnt = 0;
   int iFact = 1;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFact = iCnt * iFact;
  }
  return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =Factorial (iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}