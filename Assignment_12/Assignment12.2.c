/* 
2. Accept number of rows and nummber of columns from user and display below patern. 
 Input:  iRow = 4   iCol = 3  

 Output: 1  2  3
         1  2  3
         1  2  3
         1  2  3
 */

 #include<stdio.h>
 
 void Patern(int iRow, int iCol)
 {
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow;i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);
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

    Patern(iValue1,iValue2);

    return 0;
 }