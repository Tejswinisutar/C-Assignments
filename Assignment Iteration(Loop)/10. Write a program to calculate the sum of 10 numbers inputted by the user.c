#include<stdio.h>
#include<conio.h>

int main()
 {
    int i = 0,Num = 0,Sum = 0;

    printf("Enter 10 numbers :");

    for(i = 0; i < 10; i++)
      {
        printf("Number %d: ", i + 1);
        scanf("%d",&Num);
        Sum += Num;
      }

    printf("Sum of the 10 numbers is: %d\n",Sum);

    return 0;
}
