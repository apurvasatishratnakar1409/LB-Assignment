
class Logic
{
    public void SumofEvenNumbers(int iNo)
    {
        int iCnt=0;
        int iSum=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
            iSum=iSum+iCnt;
            }
        }
        
            System.out.println("Sume of all Even N number up to N:"+iSum);
    }
}
class program1
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.SumofEvenNumbers(11);

    }

}
