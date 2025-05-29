// 4. Accept one number and check whether is Divisible 5 or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FaLSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
       return FaLSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FaLSE;

    printf("enter number");
    scanf("%d",&iValue);

    bRet = (iValue);

    if(bRet ==  TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
       printf(" not Divisible by 5");
    }

    return 0;
}