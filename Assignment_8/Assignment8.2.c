// 2. Write a program which accepts Width and Height of Rectangle from user and calculate its area (Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
  double rArea = 0.0;
  rArea = fWidth * fHeight;
  return rArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter Height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is: %f", dRet);

    return 0;
}