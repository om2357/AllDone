package AllDone.JavaProgramm.ByTelusko.JavaProgram;
class Factorial
{
    static void fact(int x)
    {
        int fact = 1;
        for(int i = 1; i<x; i++)
        {
            fact= fact * i;
        }
        System.out.println("Factorial Value --> " + fact );
    }

    public static void main(String[] args)
    {
        System.out.println("*** Main Starts ***");
        int num = 10;
        Factorial f1 = new Factorial();
        f1.fact(num);
        fact(num);
    }
}
//3628800