#include<stdio.h>
#include<conio.h>

int main()
{
    int Numbers[10];

    int i, Min, Max;

    printf("\n Enter 10 numbers:");

    for(i = 0; i < 10; i++)
       {
          printf("Number %d: ",i+1);
          scanf("%d",&Numbers[i]);
       }
    Min = Max = Numbers[0];

    for (i = 1; i < 10; i++)
       {
        if (Numbers[i] < Min)
            Min = Numbers[i];

        if (Numbers[i] > Max)
            Max = Numbers[i];
       }
    printf("\n Minimum number = %d\n", Min);

    printf("\n Maximum number = %d\n", Max);

    getch();
    return 0;
}
