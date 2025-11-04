
class Logic
{
    public void PrintDigits(int iNo)
    {

        int iDigit=0;
        int iReverse=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iReverse=(iReverse*10)+iDigit;
             iNo=iNo/10;
        }

        int idgt=0;
        while(iReverse!=0)
        {
            idgt=iReverse%10;
            iReverse=iReverse/10;
            System.out.println(+idgt);
            
        }

    }

}
class program4
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.PrintDigits(9876);
    }
}
