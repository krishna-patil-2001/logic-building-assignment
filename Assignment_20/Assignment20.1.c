// 1. Accepts N numbers from user and Accept one another number as no ,check wether  no is present or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
        
    }
    return FALSE;

}

int main()
{
    int iSize = 0;
    int iValue = 0;
    BOOL bRet = FALSE;    
    int iCnt = 0;
    int iLength = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf(" Enter the number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :",iCnt);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check (p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}