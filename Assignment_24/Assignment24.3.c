// 3. Write a program which accept string from user and return diffrenc between frequency of small characters and frequency of capital characters.

#include<stdio.h>

int Diffrence(char *str)
{
    int iCntSmall = 0;
    int iCntCapital = 0;

   
        while(*str != '\0')
        {
         if(*str >= 'a' && *str <= 'z')
         {
            iCntSmall++;
         }
         else if(*str >= 'A' && *str <= 'Z')
         {
            iCntCapital++;
         }

         str++;

        }

        return iCntSmall - iCntCapital;
 }


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = Diffrence(arr);

    printf("%d",iRet);

    return 0;

}