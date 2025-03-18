package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class strong {
    public static void main(String[] args) {
        int num = 145;
        int sum = 0;
        int temp = num;

        while(num != 0)
        {
            int rem = num % 10;
            sum = sum + fact(rem);
            num = num / 10;

        }

        System.out.println(sum);
        if(temp == sum)
        {
            System.out.println("Strong Number");
        }
        else
        {
            System.out.println("Not");
        }
    }

    static int fact(int n)
    {
        int fact = 1;
        for(int i = n; i >= 1; i--)
        {
            fact = fact*i;
        }
        return fact;

    }
}
