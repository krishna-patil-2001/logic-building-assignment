// 3. Accepts N numbers from user and return the largest number.
#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
          iMax = Arr[iCnt];
        }
        else if (Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }
    }

   return iMax - iMin;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
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

    printf("Diffrence is : %d",iRet);

   

    free(p);

    return 0;
}