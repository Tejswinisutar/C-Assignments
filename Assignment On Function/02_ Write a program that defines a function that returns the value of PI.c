#include<stdio.h>
#include<conio.h>

double getPi()
{
    return 3.14;
}
int main()
{
    double pi = getPi();
    printf("\n The value of PI is: %.15f\n", pi);
    return 0;
}
