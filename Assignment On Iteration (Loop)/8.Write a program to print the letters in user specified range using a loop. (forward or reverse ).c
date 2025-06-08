#include<stdio.h>
#include<conio.h>

int main()
{
    char No1 =0, No2 = 0, ch = 0;

    printf("\n Enter A 1st character: ");
    scanf(" %c", &No1);

    printf("\n Enter A 2nd character: ");
    scanf(" %c", &No2);

    if (No1 <= No2)
    {
        for (ch = No1; ch <= No2; ch++)
        {
            printf("%c ", ch);
        }
    }
    else
    {
        for (ch = No1; ch >= No2; ch--)
        {
            printf("%c ", ch);
        }
    }

    printf("\n");
    return 0;
}
