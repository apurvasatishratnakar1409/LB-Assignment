#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
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
        iNo=iNo/10;
        iCnt++;

        if(iDigit==0)
        {
            return true;

        }   
    }
}

int main()
{
    int iDigit=0;
    bool bRet=false;
    printf("Enter The Number:");
    scanf("%d",&iDigit);
    bRet=CheckZero(iDigit);
    if(bRet==true)
    {
        printf("it Contain Zero");
    }
    else
    {
        printf("it contain NonZero");
    }
    
    return 0;
}
