#include<stdio.h>
#include<conoi.h>

int main()
 {
    int No = 0, Dig = 0;
    int Ecnt = 0, Ocnt = 0, Zcnt = 0;

    printf("Enter A number :");
    scanf("%d", &No);

    if(No == 0)
    {
        Zcnt = 1;
    }
    else
    {
      while(No > 0)
       {
         Dig = No % 10;

            if(Dig == 0)
            {
              Zcnt++;
            }
            else if(digit % 2 == 0)
            {
               Ecnt++;
            }
            else
            {
              Ocnt++;
            }
            No /= 10;
        }
    }
    printf("Even Digits: %d\n",Ecnt);
    printf("Odd Digits: %d\n",Ocnt);
    printf("Zero Digits: %d\n",Zcnt);

    return 0;
}
