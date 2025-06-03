// 4. Write a program which accepts temprature in fahrenheit and convert it into celsius.(1 celsius =(fahrenheit - 32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fCs = 0.0;
    fCs = ((fTemp - 32) * (5.0 / 9.0));

    return fCs;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temprature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf(" %.2f",dRet);

    return 0;
}