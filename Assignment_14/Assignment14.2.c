/* 2. Accept number of rows and number of columns from user and display below patern. 
Input: iRow = 4   iCol = 5

Output: 2  4  6  8  10
        1  3  5  7  9
        2  4  6  8  10
        1  3  5  7  9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int icnt = 0;

    icnt = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0 )
            {
                printf("%d\t",j*2);
            }

            else
            {
                 printf("%d\t",((j*2)-1));
            }
           
            
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

