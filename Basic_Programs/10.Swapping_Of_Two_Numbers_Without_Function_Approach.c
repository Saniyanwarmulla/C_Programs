#include<stdio.h>
#include<conio.h>
int main()
{
       int No1 = 0, No2 = 0, Temp = 0;
       printf("\n Enter Two Numbers = ");
       scanf("%d%d",&No1,&No2);

       printf("\n Before Swapping = 1st Number = %d.,2nd Number = %d.",No1,No2);

       Temp = No1;
       No1 = No2;
       No2 = Temp;

       printf("\n After Swapping = 1st Number = %d.,2nd Number = %d.",No1,No2);

       _getch();
       return 0;
}
