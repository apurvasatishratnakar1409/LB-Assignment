#include<stdio.h>

void NonFact(int iNo)
{
    int i;
 if(iNo <=0)
    {
        iNo = - iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if((iNo % i) != 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
    
}
