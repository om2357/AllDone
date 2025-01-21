public class Different {
    public static void main(String[] args) {
        int [] arr = {5, 2, 1, 4, 3};
        int sum = 0;
        for(int i = 0; i < arr.length;i++)
        {
            if(arr[i] % 2 == 0)
            {
                sum = sum + arr[i];
            }
        }
        System.out.println("Sum Value Is "+sum);
        int Factorial_value = fact(sum);
        System.out.println(Factorial_value);
        if (Factorial_value % 2 == 0 || Factorial_value % 3 == 0) {
            System.out.println("Not Prime Number"); // Divisible by 2 or 3, not prime
        }
        else
        {
            System.out.println("prime Number");
        }

    }
    static int fact(int x)
    {
        int fact = 1;
        for(int i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

}
