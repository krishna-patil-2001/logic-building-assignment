// 2. Write a program which accept string from user and copy the contents of that string into another string. (implement strncpy() function)

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
   *dest = '\0'; 

}

int main()
{
   
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   //empty string

    StrNCpyX(arr,brr,10);

    printf("%s",brr);  

    return 0;
}