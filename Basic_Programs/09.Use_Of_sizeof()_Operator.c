// Use of sizeof() operators

#include<stdio.h>
#include<conio.h>
int main()
{

      int Num = 21;
      char ch = 'Q';


      printf("\n Size for Integer in this environment = %d.", sizeof(Num));
      printf("\n Size for Character in this environment = %d.", sizeof(char));


      printf("\n---------------------****-------------------------\n");


      printf("\n Size for Integer in this environment = %d.", sizeof(int));
      printf("\n Size for Character in this environment = %d.",sizeof(char));
      printf("\n Size for Short Integer in this environment = %d.",sizeof(short int));
      printf("\n Size for Float in this environment = %d.",sizeof(float));
      printf("\n Size for Double in this environment = %d.", sizeof(double));

      getch();
      return 0;

}
