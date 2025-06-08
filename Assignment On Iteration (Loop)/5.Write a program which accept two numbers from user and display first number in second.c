#include<stdio.h>
#include<conio.h>

int main()
{
        int N1 = 0, N2 = 0;

        printf("\n Enter 1st Number = ");
        scanf("%d",&N1);

        printf("\n Enter 2nd Number = ");
        scanf("%d",&N2);

        if(N2 < 1)
        {
            printf("\n Invalid Input");
            return -1;
        }
        while( N2 > 0)
        {
                printf("  %d ", N1);
                N2--;
        }
        printf("\n\n Thank You..!");

        getch();
        return 0;
}
