///Getchar Program..

#include<stdio.h>
#include<conio.h>

  int main ()
 {
         char ch= 'A';
         printf("\n Value of Character=%c.\n\n",ch);

         printf("\n Enter New Character Value:");
         ch=getchar();

         printf("\n\n New Value of Character=%c.\n",ch);

         printf("\n Thanks for using our App.\n Press a Key to Exit.");

         _getch();
         return 0;
 }
