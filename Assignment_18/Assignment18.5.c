// 5. Accepts N numbers from user and display all such elements which are  multiples of 11.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int icnt = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if(Arr[icnt] % 11 == 0) 
        {
            printf("%d\t",Arr[icnt]);
        }
        
    }
      

}

int main()
{
    int iSize = 0;
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

     Display (p,iSize);

    free(p);

    return 0;
}