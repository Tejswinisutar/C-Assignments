#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0,No2 = 0;

   printf("\n Enter A 1st Number:");
   scanf("%d",&No1);

   printf("\n Enter A 2nd Number:");
   scanf("%d",&No2);

   printf("\n\n Before swapping Number %d = %d",No1,No2);

   No1 = No1 + No2;
   No2 = No1 - No2;
   No1 = No1 - No2;

   printf("\n\n After Swapping Number %d = %d",No1,No2);

   getch();
   return 0;
}
