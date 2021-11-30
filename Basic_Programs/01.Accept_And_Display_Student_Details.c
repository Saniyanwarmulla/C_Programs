/// Accept And Display Student Details.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int R_No=0;
    char Grade="\0";
    char Nm[80]=" ";
    float Per=0.0;

    printf("\n\t Enter Student Details\n ");

    printf("\n\t Enter Student Roll No =");
    scanf("%d",&R_No);

    fflush(stdin);
    printf("\n\t Enter Student Name =");
    scanf("%s",&Nm);

    printf("\n\t Enter The Percentage =");
    scanf("%f",&Per);

     fflush(stdin);
    printf("\n\t Enter Student Grade=");
    scanf("%c",&Grade);

    system("cls");

    printf("\n\t Student Information \n");

    printf("\n--------------****-----------------\n");

    printf("\n\t Roll No=%d \n\t Student Name=%s \n\t Percentage=%f \n\t Grade=%c",R_No,Nm,Per,Grade);

    printf("\n--------------****------------------\n");

    _getch();
    return 0;

}




