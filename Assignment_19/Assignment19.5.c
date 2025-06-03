// 5. Accepts N numbers from user and accept one another number as no , return frequency of no from it.

#include<stdio.h>
#include<stdlib.h>

int FreQuency(int Arr[], int iLength,int iNo)
{
    int i = 0;
    int iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i]  == iNo) 
        {
           iCount++;
        }
        
    }
      return iCount;

}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int iLength = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
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

    iRet = FreQuency (p,iSize,iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}