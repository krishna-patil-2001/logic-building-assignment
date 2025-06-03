/* 
3. Accept number of rows and nummber of columns from user and display below patern. 
 Input:  iRow = 3   iCol = 5 

 Output: 5  4  3  2  1
         5  4  3  2  1
         5  4  3  2  1
 */

 #include<stdio.h>
 
 void Patern(int iRow, int iCol)
 {
    int i = 0;
    int j = 0;

    for(i = iRow; i >= 1;i--)
    {
        for(j = iCol; j >= 1; j--)
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