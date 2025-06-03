// 5. Write a program which accepts area in square feet and convert it into square meter .(1 square feet = 0.0929 square meter)

#include<stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%f",dRet);

    return 0;
}