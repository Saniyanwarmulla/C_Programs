#include<stdio.h>
#include<conio.h>
int main ()
{
       int No = 0;

       printf("\n ASCII Table =>\n\n");

             while(No<128)
             {
                  printf("\n\t %3d = %c.",No,No);
                  No++;
             }

       printf("\n\n\t Thanks...!!!");

       _getch();
       return 0;
}
