// 3. program to print 5 to 1 on screen.

#include<stdio.h>

void Display()
{
    int i = 0;
    
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;

    }
}
int main()
{
    Display();

    return 0;
}