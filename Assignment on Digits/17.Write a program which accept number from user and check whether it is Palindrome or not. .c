#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Rem = 0, Rev = 0;

    printf("\n Enter a number: ");
    scanf("%d", &No);

    Temp = No;

    while (Temp != 0)
        {
          Rem = Temp % 10;
          Rev = Rev * 10 + Rem;
          Temp /= 10;
        }

    if(No == Rev)
    {
       printf("\n %d is a Palindrome.\n", No);
    }
    else
    {
       printf("\n %d is Not a Palindrome.\n", No);
    }
    getch();
    return 0;
}
