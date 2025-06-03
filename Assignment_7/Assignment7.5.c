// 5. Write a program which returns diffrence between Even factorial and Odd factorial of given number.

# include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int eVenFact = 1;
    int oddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            eVenFact = iCnt * eVenFact; 
        }
        else
        {
            oddFact = iCnt * oddFact;
        }
    }
    return eVenFact - oddFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Diffrence is: %d",iRet);

    return 0;
}