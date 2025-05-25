#include <stdio.h>
#include<conio.h>

int main()
{
    float side = 0,area = 0;

    printf("\n Enter the length of square:");
    scanf("%f", &side);

    area = side * side;

    printf("\n The area of square is: %.2f", area);

    return 0;
}
