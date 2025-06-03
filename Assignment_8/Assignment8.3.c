// 3. Write a program which accepts distance in kilometers and convert it into meter.(1 kilometer = 1000 meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int i = 1000;
    int iMeter = 0;
    iMeter = iNo * i;
    
    return iMeter;
  
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("meter is: %d",iRet);

    return 0;
}