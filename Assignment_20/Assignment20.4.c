// 4. Accepts N numbers from user and Accept range , disply all elements from that range

   #include<stdio.h>
   #include<stdlib.h>

   void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    int iIndex = 0;

    for(i = 0; i < iLength; i++)
    {
      if(Arr[i] >= iStart  &&  Arr[i] <= iEnd)
      {
        printf("%d\t",Arr[i]);
      }
    }
        
 }
   

int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;    
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

     printf("Enter the ending point\n");
    scanf("%d",&iValue2);

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

    Range (p,iSize,iValue1,iValue2);

    
    free(p);

    return 0;
}