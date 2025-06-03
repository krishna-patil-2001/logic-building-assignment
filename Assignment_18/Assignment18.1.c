// 1. Accepts N numbers from user and return diffrence between sumation of even elements and  sumation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[], int iLength)
{
    int icnt = 0;
    int iEvensum = 0;
    int iOddsum = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt] % 2 == 0)
        {
            iEvensum = Arr[icnt] + iEvensum;
        }
        else
        {
            iOddsum = Arr[icnt] + iOddsum;
        }
    }
      return iEvensum - iOddsum;

}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iLength = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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

    iRet = Diffrence (p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}