// 5. Accepts N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iProduct= 1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
          iProduct = Arr[i] * iProduct;
        }
    }
      return iProduct;

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

    iRet = Product (p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}