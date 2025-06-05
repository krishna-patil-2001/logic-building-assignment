// 4. Write a program which accept string from user and display  only digits from that string.

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
       while(*str != '\0')
    {
        if(*str >= 48 && *str <= 57)  
        {
           printf("%c\t",*str);
        }
        str++;  
    }
    }

}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);


    return 0;
}