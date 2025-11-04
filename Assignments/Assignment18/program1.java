
class Logic
{
    public void CheckPrime(int iNo)
    {
        
        if(iNo%2==0)
        {
            System.out.println(iNo+" is even");
        }
        else
    {
         System.out.println( iNo+" is not even");
         
    }
 
    }
}
class program1
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.CheckPrime(11);

    }

}
