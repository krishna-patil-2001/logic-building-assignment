// 1. write a program which displays ASCII table . Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
     printf("---------------------------------------------------\n");
    printf("| Symbol | Decimal | Hexadecimal | Octal          |\n");
    printf("---------------------------------------------------\n");

    for(int i = 0; i <= 255; i++)
    {
        
        if(i < 32 || i == 127)
        {
           
            switch(i)
            {
                case 0:  printf("|  NUL   "); break;
                case 1:  printf("|  SOH   "); break;
                case 2:  printf("|  STX   "); break;
                case 3:  printf("|  ETX   "); break;
                case 4:  printf("|  EOT   "); break;
                case 5:  printf("|  ENQ   "); break;
                case 6:  printf("|  ACK   "); break;
                case 7:  printf("|  BEL   "); break;
                case 8:  printf("|  BS    "); break;
                case 9:  printf("|  TAB   "); break;
                case 10: printf("|  LF    "); break;
                case 11: printf("|  VT    "); break;
                case 12: printf("|  FF    "); break;
                case 13: printf("|  CR    "); break;
                case 14: printf("|  SO    "); break;
                case 15: printf("|  SI    "); break;
                case 16: printf("|  DLE   "); break;
                case 17: printf("|  DC1   "); break;
                case 18: printf("|  DC2   "); break;
                case 19: printf("|  DC3   "); break;
                case 20: printf("|  DC4   "); break;
                case 21: printf("|  NAK   "); break;
                case 22: printf("|  SYN   "); break;
                case 23: printf("|  ETB   "); break;
                case 24: printf("|  CAN   "); break;
                case 25: printf("|  EM    "); break;
                case 26: printf("|  SUB   "); break;
                case 27: printf("|  ESC   "); break;
                case 28: printf("|  FS    "); break;
                case 29: printf("|  GS    "); break;
                case 30: printf("|  RS    "); break;
                case 31: printf("|  US    "); break;
                case 127:printf("|  DEL   "); break;
                default: printf("|        "); break;
            }
        }
        else
        {
            printf("|   %c    ", i);
        }

        printf("|   %3d    |     %02X       |   %03o          |\n", i, i, i);
    }

    printf("---------------------------------------------------\n");
}


int main()
{
    DisplayASCII();

    return 0;
}