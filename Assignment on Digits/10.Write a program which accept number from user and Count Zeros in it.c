#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0,Dig = 0 ,Zcnt = 0,Temp = 0;

   printf("\n Enter A Number :");
   scanf("%d",&No);

   Temp = No;

   while (Temp > 0)
   {
       Dig = Temp % 10;
       if(Dig == 0)
       {
           Zcnt++;
       }
      Temp /= 10;
   }
   printf("\n Count of Zero in %d is %d",No,Zcnt);

   getch();
   return 0;
}
