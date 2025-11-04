#include<stdio.h>

int CheckEvenOdd(int Num)
{
    if((Num %2)==0)
    {
        printf("Even\n",&Num);
    }
    else
    {
        printf("odd\n",Num);
    }

}

int main()
{
    int Number;

    printf("Enter the number:\n");
    scanf("%d",&Number);

    CheckEvenOdd(Number);
    
    return 0;
    
}
