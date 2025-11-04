
class Logic
{
    public void CheckLeapYear(int iNo)
    {
        if((iNo%4==0 && iNo%100!=0)||iNo%400==0)
        {
            System.out.println(iNo+ " This is leap Year");

        }
        else
        {
            System.out.println(iNo+ " This is Not a leap Year");
        }

    }

}
class program1
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.CheckLeapYear(2024);
    }
}
