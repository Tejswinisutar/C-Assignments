#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Cnt = 0,Temp = 0,Dig = 0;

    printf("\n Enter A Number:");
    scanf("%d",&No);

    Temp = No;
        while(Temp > 0)
           {
             Dig=Temp%10;
             if(Dig == 2)
             {
               Cnt++;
             }
            Temp = Temp/10;
          }

    printf("\n Count %d of frequency %d",No,Cnt);
    getch();
    return 0;



}
