#include <stdio.h>
#include <conio.h>

int main()
 {
    double num, SR;

    printf("\n Enter a number: ");
    scanf("%lf",&num);

    if (num< 0)
    {
        printf("\n Square root of a negative number.");
    }
    else
    {
        SR = sqrt(num);

        printf("\n The square root of %.2lf is %.2lf\n",num, SR);
    }
    return 0;
}
