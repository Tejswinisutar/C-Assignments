#include<stdio.h>
#include<conio.h>

int main()
 {
    int No = 0,Dig = 0,Cnt = 0,Rem = 0,Temp = 0;

    printf("\n Enter a number: ");
    scanf("%d",&No);

    printf("\n Enter Digit to count: ");
    scanf("%d",&Dig);

    Temp = No;

    while(Temp != 0)
        {
            Rem = Temp % 10;
            if (Rem == Dig)
              {
                Cnt++;
              }
            Temp = Temp / 10;
    }
    printf("\n Digit %d occurs %d times in %d\n",No,Dig,Cnt);
    getch();
    return 0;
}
