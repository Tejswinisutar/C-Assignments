#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Rev = 0, Rem = 0,Temp = 0;

    do
    {
        printf("\n Enter 4-digit number: ");
        scanf("%d", &No);
    }
    while (No < 1000 || No > 9999);

    Temp = No;

    while (Temp != 0)
        {
          Rem = Temp % 10;
          Rev = Rev * 10 + Rem;
          Temp /= 10;
        }

    printf("\n Original NumberS: %d\n", No);
    printf("\n Reversed Number: %d", Rev);
    getch();
    return 0;
}
