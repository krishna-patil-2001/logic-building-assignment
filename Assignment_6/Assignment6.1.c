/* 1.Write a program which accept number from user and if number is less than 50 then print small , 
if it is grater than 50 and less than 100 then print medium , if it is grater than 100 then print large  */

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("medium");
    }
    else if(iNo > 100)
    {
        printf("large");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
