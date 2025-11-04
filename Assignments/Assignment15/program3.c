#include<stdio.h>
void CountRange(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    int iFreq=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt++;
        if(iDigit>3 && iDigit<7)
        {
            iFreq++;

        }
    }
    printf("%d",iFreq);

}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    CountRange(iValue);
    return 0;
}
