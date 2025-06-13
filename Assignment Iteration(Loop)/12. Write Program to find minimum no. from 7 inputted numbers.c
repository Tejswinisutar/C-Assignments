#include <stdio.h>
#include<conio.h>

int main()
{
    int Numbers[7];
    int i, Min;

    printf("\n Enter 7 Numbers:\n");
    for (i = 0; i < 7; i++)
    {
        printf("\n Number %d: ", i + 1);
        scanf("%d", &Numbers[i]);
    }
    Min = Numbers[0];

    for (i = 1; i < 7; i++)
    {
        if (Numbers[i] < Min)
        {
            Min = Numbers[i];
        }
    }
    printf("\n The Minimum Numbers is: %d\n",Min);

    getch();
    return 0;
}
