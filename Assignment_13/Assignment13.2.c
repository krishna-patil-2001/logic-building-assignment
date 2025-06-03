/* 
2. Accept number of rows and nummber of columns from user and display below patern. 
 Input:  iRow = 4   iCol = 4 

 Output: A  B  C  D
         a  b  c  d
         A  B  C  D
         a  b  c  d
 */

 #include<stdio.h>
 
 void Patern(int iRow, int iCol)
 {
    int i = 0;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch1 = 'A';
        ch2 = 'a';
        
        for(j = 1; j <= iCol; j++,ch1++,ch2++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                 printf("%c\t",ch1);
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

    Patern(iValue1,iValue2);

    return 0;
 }