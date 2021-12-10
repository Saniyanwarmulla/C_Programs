///Swapping of Two Numbers without Function Approach

#include<stdio.h>
#include<conio.h>
int main ()
 {
          int Num1 = 0,Num2 = 0;

          printf("\n Enter Two Numbers for Swapping = ");
          scanf("%d%d",&Num1,&Num2);

          printf("\n Before Swapping First Number = %d.",Num1);
          printf("\n Before Swapping Second Number = %d.",Num2);

          Num1 = Num1+Num2;
          Num2 = Num1-Num2;
          Num1 = Num1-Num2;

          printf("\n After Swapping First Number = %d.",Num1);
          printf("\n After Swapping Second Number = %d.",Num2);

          printf("\n\n Thanks....!!!");

          getch();
          return 0;

 }
