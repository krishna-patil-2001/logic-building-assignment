// 4. Accepts N numbers from user and display all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    
    for(i = 0; i < iLength; i++)
    {
      int temp = Arr[i];
       int iCount = 0;
       

      while(temp != 0)
      {
        iCount++;
        temp = temp / 10;
      }
      if(iCount == 3)
      {
        printf("%d\t",Arr[i]);
      }

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