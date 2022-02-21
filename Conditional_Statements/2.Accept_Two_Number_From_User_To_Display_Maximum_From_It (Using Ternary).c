#include<stdio.h>
#include<conio.h>
int main()
{
         int No1 = 0,No2 = 0;
         Grade:

         printf("\n Enter Two Integer Numbers for Display Maximum: ");
         scanf("%d%d",&No1,&No2);

         if(No1 == No2)
         {
              printf("\n Both Given Numbers are Equal.\n Please Enter Different Number to compare.\n");
              goto Grade;
         }

         (No1 > No2)? printf("\n Number %d is Maximum.",No1) : printf("\n Number %d is Maximum.",No2);

         getch();
         return 0;
}
