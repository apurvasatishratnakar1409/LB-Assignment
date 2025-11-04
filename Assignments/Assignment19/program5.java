
class Logic
{
    public void CalculatePower(int Base,int Exp)
    {
        int Result=1;
        int iCnt=0;
        for(iCnt=1;iCnt<=Exp;iCnt++)
        {
            Result=Result*Base;
        }
        System.out.println("Power is "+Result);
    }

}
class program5
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.CalculatePower(2,5);
    }
}
