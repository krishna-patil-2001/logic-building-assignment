/* 3. Accept character from user. if it is capital then display all the character from the input character till Z.
 if input character is  small then print all the characters in reverse order till a.in other cases return directly. */

 #include<stdio.h>

 void Display(char ch)
 {

    if(ch >='A' && ch <='Z')
    {
       while (ch <= 'Z')
        {
         printf("%c\t",ch);
         ch++;
        }
   }
    else if(ch >='a' && ch <='z')
    {
        while (ch >= 'a')
        {
         printf("%c\t",ch);
         ch--;
        }
        
    }

 }

 int  main()
 {
    
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
  }

