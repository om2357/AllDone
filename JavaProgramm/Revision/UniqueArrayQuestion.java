package AllDone.JavaProgramm.Revision;

public class UniqueArrayQuestion {
    public static void main(String[] args) {
        int arr[] = {151, 142, 131, 126, 124};
        int sum = 0;
        int num = 0;

        for(int i = 0 ; i < arr.length; i ++)
        {
           sum = sum+Sum(arr[i]);
        }
        System.out.println(sum);
        num = sum;
        fib(num);
        //System.out.println(sum);
    }
    static int Sum(int i)
    {
        int sum = 0;
        while(i>0)
        {
            int rem = i % 10;
            sum = sum + rem;
            i = i / 10;
        }
        return sum;
    }
    static void fib(int sum)
    {
        int a = 0, b = 1, c = 0;
        System.out.print(a + " " + b);
        for(int i = 2; i < sum; i++)
        {

            c = a + b;
            System.out.print( c + " " );
            a = b;
            b = c;
        }
    }
}
