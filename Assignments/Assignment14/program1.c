#include<stdio.h>

void DisplayDigit(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int  iDigit=0,iCnt=0;
    iCnt=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
         iNo=iNo/10;
        iCnt++;

    }
   

}

int main()
{
    int iDigit=0;
    printf("Enter The Number:");
    scanf("%d",&iDigit);
    DisplayDigit(iDigit);
    
    return 0;
}
