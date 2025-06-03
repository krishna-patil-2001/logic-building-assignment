/*   1. Accept number from user and display below patern.
    Input : 5
    Output: A  B  C  D  E   */

    #include<stdio.h>

    void Patern(int iNo)
    {
        int iCnt = 0;
        char iCh = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++, iCh++)
        {
            printf("%c\t",iCh);
        } 

    }

    int main()
    {
        int iValue = 0;
        printf("Enter number of elements\n");
        scanf("%d",&iValue);

        Patern(iValue);

        return 0;
    }

