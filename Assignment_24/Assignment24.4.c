// 4. Write a program which accept string from user and check wether it contains vowels in it or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int iCntSmall = 0;
    int iCntCapital = 0;

   
        while(*str != '\0')
        {
         if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || 
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' )
         {
             return TRUE;
         }

         str++;

        }
          return FALSE;

 }


int main()
{
    char arr[20];
    int bRet = FALSE;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("there is no Vowel");
    }

    return 0;

}