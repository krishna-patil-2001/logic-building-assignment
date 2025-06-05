// 5. Write a program which two string from user and concat second string after first string(Implement strcat() function).

#include<stdio.h>

 void StrCatX(char *src, char *dest)
 {
    while(*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *dest = '\0';

 }

int main()
{
    char arr[50] = "Marvellous Infosystem ";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;
}