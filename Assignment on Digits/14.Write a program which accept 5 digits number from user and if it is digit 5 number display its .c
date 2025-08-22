#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Dig = 0,Temp = 0,Sum = 0,Cnt = 0;

    printf("\n Enter 5 Numbers :");
    scanf("%d",&No);

    Temp = No;
     while(Temp > 0)
     {
         Dig = Temp % 10;
         Sum = Sum + Dig;
         Cnt++;
         Temp = Temp / 10;
     }
     if(Cnt == 5)
     {
         printf("\n Sum of Digit is :%d",Sum);
     }
     else
     {
        printf("\n Invalide Input");
     }
     getch();
     return 0;
}
