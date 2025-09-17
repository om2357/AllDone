package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class Sir {
    public static void main(String[] args) {

        int n = 153150191;

        int first3Sum = 0;
        int last3Sum = 0;

//        int sum = 0;
//        int sum2 = 0;

        last3Sum = n % 1000;
        first3Sum = n / 1000000;
        int middleThreeDigits = (n / 1000) % 1000;

        int temp = first3Sum;
        int temp2 = last3Sum;
        int temp3 = middleThreeDigits;


        int Fun1 = reminder(temp);
        int fun2 = reminder(temp2);
//        while (temp > 0) {
//            sum = sum + temp % 10;
//            temp /= 10;
//        }
//        while (temp2 > 0) {
//            sum2 = sum2 + temp2 % 10;
//            temp2 /= 10;
//        }
        System.out.println(Fun1+" "+fun2);
//        System.out.println(sum);
//        System.out.println(sum2);

        int add = Fun1 + fun2;
        System.out.println(add);
        int sumOfSquares = 0;

        while (temp3 > 0) {
            int digit = temp3 % 10;
            int square = digit * digit;
            sumOfSquares += square;
            temp3 = temp3 / 10;
        }

        System.out.println(sumOfSquares);

//        System.out.println("Addition of two number "+ add);

        int num =  reverse(sumOfSquares);
        int sumOfTwoLastAndFirst = reverse(add);

        System.out.println("Reverse num of square "+num);
        System.out.println("Reverse num of addition "+sumOfTwoLastAndFirst);

        int divide =  num / sumOfTwoLastAndFirst ;
        System.out.println("divide  --> "+divide);

        int NextStep = reverse(divide);
        System.out.println("31 is now reversed --> " + NextStep);

        int primeNo = NextStep;
        if(primeNo % 2 == 0)
        {
            System.out.println("Not prime number");
        }
        else
        {
            System.out.println("prime No");
        }
        int summ =  reminder(primeNo);
        System.out.println(" Now add this number 1 and 3 --->"+summ); // add 4

        int NowFactValue = fact(summ);
        System.out.println("Factorial Value is --> "+ NowFactValue);

        if(NowFactValue % 2 == 0)
        {
            System.out.println("Even Num");
        }
        else
        {
            System.out.println("odd No");
        }
        int added =  reminder(NowFactValue);
        System.out.println("valuee  .-->"+ added);
        fib(added);


    }
    static int reverse(int num){

        int reversedSum = 0;
        while (num > 0) {
            int rem = num % 10;
            reversedSum = reversedSum * 10 + rem;
            num = num / 10;
        }
        return reversedSum;
    }
    static int reminder(int temp)
    {
        int sum = 0;
        while (temp > 0) {
            sum = sum + temp % 10;
            temp /= 10;
        }
        return sum;
    }

    static int fact(int n)
    {
        int fact = 1;
        for(int i = n; i>=1; i--)
        {
            fact = fact * i;

        }
        return fact;
    }
    static void fib(int n)
    {
        int a = 0;
        int b = 1;
        int add = 0;
        for(int i = 1; i<n ;i++)
        {
            add = a + b;
            System.out.println(" " + add);
            a = b;
            b = add;
        }
    }
}