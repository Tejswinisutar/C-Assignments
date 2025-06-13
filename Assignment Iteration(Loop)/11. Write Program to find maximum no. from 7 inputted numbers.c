#include<stdio.h>
#include<conio.h>

int main()
 {
    int i = 0,Num = 0,Max = 0;

    printf("\n Enter 7 numbers :");
    scanf("%d",&Num);

    for(i = 1; i < 7; i++)
    {
       scanf("%d",&Max);
       if(Num > Max)
        {
            Max = Num;
        }
    }
    printf("\n Maximum number is: %d",Max);

    return 0;
}
