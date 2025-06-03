// 3. Accepts N numbers from user and Accept one another number as no ,return index of last occurence of that no.

   #include<stdio.h>
   #include<stdlib.h>

   int LasttOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iIndex = 0;

    for(i = iLength; i >= 0; i--)
    {
        if(Arr[i] == iNo)
        {
          iIndex = i;
          return i;
        }
        
    }
    return -1;

}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;    
    int iCnt = 0;
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

    iRet = LasttOcc (p,iSize,iValue);

    if(iRet == -1)
    {
        printf("there is no such  number");
    }
    else
    {
        printf("last occurenc of number is %d",iRet);
    }

    free(p);

    return 0;
}