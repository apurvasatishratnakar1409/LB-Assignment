#include <stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt =0;
    int iFact = 0;

    for(iCnt = iNo, iFact= 1 ; iCnt>= 1 ; iCnt--)
    {
        iFact = iFact* iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0; int iRet =0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);

    return 0;
}
