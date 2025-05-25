#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,No3 = 0,Temp = 0;

    printf("\n Enter A 1st Number:");
    scanf("%d",&No1);

    printf("\n Enter A 2nd Number:");
    scanf("%d",&No2);

    printf("\n Enter A 3rd Number:");
    scanf("%d",&No3);

    printf("\n\n Before Swapping Number %d %d %d",No1,No2,No3);

    Temp = No1;
    No1 = No3;
    No3 = No2;
    No2 = Temp;

    printf("\n\n After Swapping Number %d %d %d",No1,No2,No3);

    getch();
    return 0;
}
