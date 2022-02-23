#include<stdio.h>
#include<conio.h>
int main()
{
          int No1 = 0,No2 = 0;

          printf("\n Enter Two Integer Numbers=> ");
          scanf("%d%d",&No1,&No2);

          (No1 == No2)? printf("\n Both Given Numbers are Equal.") : (No1 > No2)? printf("\n Number %d is Maximum",No1) : printf("\n Number %d is Maximum",No2);

          _getch();
          return 0;

}
