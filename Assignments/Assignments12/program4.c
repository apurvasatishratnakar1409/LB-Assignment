#include<stdio.h>

int SumEvenFactors(int iNo)
{
    int iCnt=0, iSum=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0 && iCnt%2==0)
        {
          
            iSum=iSum+iCnt;
           
        }

    }
    return iSum;
//time complexity O(n/2)

}

int main()
{
    int ivalue=0 ,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&ivalue);
    iRet=SumEvenFactors(ivalue);
    printf("%d\n",iRet);

    return 0;

}
