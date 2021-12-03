#include<stdio.h>
#include<conio.h>
int main()
{
      char ch = 'A';

      printf("\n\n Value of Our character is = %c.\n\n........Hello Indian...... \n\n",ch);

      printf("\n Are You Indian?????? (Yes/No) = ");

      ch = getchar();

      if(ch == 'Y' || ch == 'Y')
      {
             printf("\n\n Welcome Dear \n\n");

      }
      else
      {
             printf("\n\n Bye Bye... \n\n");
      }

      getche();
      return 0;
}
