/* 
1. Accept number of rows and nummber of columns from user and display below patern. 
 Input:  iRow = 4   iCol = 4 

 Output: A  B  C  D
         A  B  C  D
         A  B  C  D
         A  B  C  D
 */

 #include<stdio.h>
 
 void Patern(int iRow, int iCol)
 {
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';
        for(j = 1; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
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