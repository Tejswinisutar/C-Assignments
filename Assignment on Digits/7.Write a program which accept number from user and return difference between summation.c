#include<stdio.h>
#include<conio.h>
int main()
{
    int num, dig = 0,Esum = 0, Osum = 0, diff = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
        {
          dig = num % 10;

        if (dig % 2 == 0)
           {
              Esum += dig;
           }
        else
            {
              Osum += dig;
            }

        num = num / 10;
        }

    diff = Esum - Osum;

    printf("Difference between even and odd digit sums = %d\n", diff);

    return 0;
}
