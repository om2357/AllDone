package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class StrongNumberFirSe {
    public static void main(String[] args) {
        int num = 145;
        int copy = num;
        int sum = 0;
        while(num != 0)
        {
            int rem = num % 10;
            sum = sum + fact(rem);
            num = num / 10;
        }

        if(copy == sum)
        {
            System.out.println("done"+ sum);
        }
        else{
            System.out.println("Not Done " + sum);
        }
    }
    static int fact(int rem)
    {
        int fact = 1;
        for(int i = 1; i <= rem ;i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
