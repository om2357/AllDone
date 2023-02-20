public class StrongNum {
    public static void main(String[] args) {

        int num = 145;
        int copy = num;
        int sum = 0;

        while(num!= 0)
        {
            int rem = num % 10;
            sum = sum + fact(rem);
            num = num / 10;
        }
        System.out.println(sum);
        if(copy == sum)
        {
            System.out.println("Number is strong " + copy);
        }
        else
        {
            System.out.println("no");
        }
    }
    static int fact(int num)
    {
        int fact = 1;
        for(int i = 1; i <= num ;i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
