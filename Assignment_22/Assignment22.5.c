/* 
5. Accept Division of student from user and depends on the division display exam timing .
there are 4 division in school as A,B,C,D. exam of division  A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.asm
(Application should be case insensitive)

*/ 

#include<stdio.h>

void DisplaySchedule(char ch)
{
    if((ch >= 'a')  &&  (ch <= 'z'))
    {
        ch = ch - 32;
    }

    switch (ch)
    {
    
        case 'A':
            printf("Your exam is at 7 AM\n");
            break;
        case 'B':
            printf("Your exam is at 8:30 AM\n");
            break;
        case 'C':
            printf("Your exam is at 9:20 AM\n");
            break;
        case 'D':
            printf("Your exam is at 10:30 AM\n");
            break;
        default:
            printf("Invalid Division\n");
            break;
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter your Division\n");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);
    

    return 0;
}