// 5. Write a program which accept string from user reverse that string in place.

#include<stdio.h>

void StrRevX(char *str)
{
  char *start = str;
    char *end = str;
    char temp;

    
    while(*end != '\0')
    {
        end++;
    }
    end--; 

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string are %s",arr);

    return 0;
}