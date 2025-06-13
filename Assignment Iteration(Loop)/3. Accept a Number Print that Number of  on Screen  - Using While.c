#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0;

        printf("\n Enter a Number = ");
        scanf("%d",&No);

        if(No < 1)
        {
            printf("\n Invalid Input");
            return -1;
        }

        printf("\n\n");

        while( No > 0 )
        {
                printf(" * ");
                No--;
        }

        printf("\n\n Thanks..!");

        getch();
        return 0;
}
