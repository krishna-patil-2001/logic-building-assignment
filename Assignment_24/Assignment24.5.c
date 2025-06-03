// 5. Write a program which accept string from user and display it in reverse order.

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{

     char *start = str;
     char *end = str;

    
    while(*end != '\0')
    {
        end++;
    }

    end--; 

    while(end >= start)
    {
        printf("%c", *end);
        end--;
    }

    printf("\n");
}

 


int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);


    return 0;

}