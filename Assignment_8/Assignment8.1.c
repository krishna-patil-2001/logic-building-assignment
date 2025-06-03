// 1. Write a program which accepts radius of circle from user and calculate its area. consider value of PI as 3.14(Area = PI * Radius * Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double fArea = 0.0;
    float fPi = 3.14;
    fArea = fPi * fRadius * fRadius;
    
     return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}