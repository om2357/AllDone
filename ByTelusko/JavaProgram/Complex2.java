package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class Complex2 {
    static int a;
    static int b;
    static int x;
    static int y;
    static int z;
    static int q;
    static int w;
    static int f;


    static void number()
    {
        int no=153150191;
        System.out.println("The given number is "+no);
        System.out.println("It will fetch 3digit no from the given string");

        while(no!=0)
        {
            int rem=no%1000;
            if (rem%2==0)
            {
                a=rem;
                System.out.println(a+ " The number is even no sooo");
                sos(a);

            }
            else
            {
                b=rem;
                System.out.println(b+ " The number is odd no sooo");
                sod(b);

            }
            no=no/1000;
        }

    }

    static int sos(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum= sum+rem*rem;
            n=n/10;
        }
        System.out.println("The sum of square number is" + sum);
        return rev(sum);
    }

    static int rev(int n)
    {
        int rev=0;
        while(n!=0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        z=rev;
        System.out.println("The reverse number is "+ z);
        return rev;
    }

    static int sod(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum= sum+rem;
            n=n/10;
        }
        return sodd(sum);

    }

    static int sodd(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum= sum+rem;
            n=n/10;
        }
        x=x+sum;

        return sum(x);

    }
    static int sum(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        y=sum;
        System.out.println( " soo The sum of all odd number is "+ y);

        return sum;
    }

    static int revv(int a)
    {
        int rev=0;
        while(a!=0)
        {
            int rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        System.out.println(a+ "Again Reverse the number is  "+rev);
        System.out.println("After that wee are check weather this number is prime or not.................");
        return prime(rev);
    }

    static int prime(int n)
    {
        boolean flag=true;
        for(int i=2; i<n; i++)
        {
            if (n%i==0)
            {
                flag=false;
                break;
            }

        }
        if (flag==true)
        {

            q=n;
            System.out.println("Check complete this number is prime no");

        }
        else
        {
            System.out.println("Check complete this number is not a prime no");
        }
        return soddd(q);
    }

    static int soddd(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        System.out.println("Again Sum of digit this number is "+sum);
        return facto(sum);
    }

    static int facto(int n)
    {
        int fact=1;
        for(int i=n; i>=1;i--)
        {
            fact=fact*i;
        }
        System.out.println("Next step wee are doing the Factorial of that number is "+fact);
        System.out.println("Again check it is odd number or even");
        return check (fact);
    }
    static int check(int n)
    {
        if (n%2==0)
        {
            w=n;
            System.out.println("it is even no "+ w);

        }
        else
        {
            System.out.println("its is a odd no" + n);
        }
        return sumofdigit(w);
    }

    static int sumofdigit(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        System.out.println("Sum of digit this number is "+sum);

        return fibb(sum);
    }

    static int fibb(int n)
    {
        int fib1=0;
        int fib2=1;
        int fib3=0;
        System.out.println(fib1+" "+fib2);
        for (int i=1;i<=n;i++)
        {
            fib3=fib1+fib2;
            System.out.println(fib3);
            fib1=fib2;
            fib2=fib3;
        }
        f=fib3;
        System.out.println("Fibannaci of this number is "+f);
        return f;

    }
    public static void main(String[]args)
    {
        number();
        int p=z/y;
        System.out.println("Division this two number is  "+p);
        revv(p);



    }
}
