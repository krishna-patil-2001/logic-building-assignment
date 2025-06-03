// 5. Accepts N numbers from user and display Sumation of digits of each number.
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    
    for(i = 0; i < iLength; i++)
    {
       int isum = 0;
       int temp = Arr[i];

      while(temp != 0)
      {
        isum = isum + temp % 10;
        temp = temp / 10;
      }

      printf("%d\t", isum);

    }

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

     Digits (p,iSize);

    free(p);

    return 0;
}