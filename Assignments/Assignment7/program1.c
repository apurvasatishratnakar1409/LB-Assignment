#include<stdio.h>

void Display( int i)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=i ; iCnt++)
    
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
