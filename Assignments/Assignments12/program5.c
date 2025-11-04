#include<stdio.h>
#include<stdbool.h>

bool CheckNumDivBy5(int iNo)
{
    return((iNo%5)==0);

}
//time complexity O(1)
int main(void)
{
    
      int iValue=0;
  
    printf("Enetr Number:");
    scanf("%d",&iValue);
    printf("%s\n",CheckNumDivBy5(iValue)?"Yes":"No");

    return 0;
}

/*
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enetr Number:");
    scanf("%d",&iValue);
    bRet=CheckNumDivBy5(iValue);
    if(bRet==true)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
    printf("%d is not  Divisible by 5",iValue);
    }


    return 0;
}*/
