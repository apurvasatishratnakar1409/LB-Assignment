class Logic
{
    public void FindFactorial(int iNo)
    {
    
        int iReverse=0;
        
        while(iNo!=0)

        {
            int iDigit=iNo%10;
            iNo=iNo/10;
            iReverse=(iReverse*10)+iDigit;
        }     
        System.out.println("Reverse number is:"+iReverse);
    }

}
class Program4

{
    public static void main (String arge[])
    {
        Logic Lobj=new Logic();
        Lobj.FindFactorial(1234);

    }
}
