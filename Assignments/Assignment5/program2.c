#include<stdio.h>

int CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("positive number\n");
    }
    else if (num == 0)
    {
        printf("Zero\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
}

int main()
{
    int number;

    printf("Enter the number:\n");
    scanf("%d",&number);

    CheckNumberType(number);
    
    
    return 0;
    
}
