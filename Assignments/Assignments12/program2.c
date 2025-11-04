#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt=0, icount=0;
    for(iCnt=1;iCnt<=(iNo);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            icount++;
           
        }

    }
    return icount;
//time complexity O(n)

}

int main()
{
    int ivalue=0 ,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&ivalue);
    iRet=CountFactors(ivalue);
    printf("%d",iRet);

    return 0;

}
