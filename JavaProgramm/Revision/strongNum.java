package AllDone.JavaProgramm.Revision;

public class strongNum {
    public static void main(String[] args) {
        int no = 145;
        int copy = no;
        int sum = 0;

        while(no > 0)
        {
            int rem = no % 10;
            sum = sum + fact(rem);
            no = no/10;
        }
        if(sum == copy)
        {
            System.out.println("number is strong " + sum);
        }
        else {
            System.out.println("sorry -> " + sum);
        }
    }
    static int fact(int n)
    {
        int fact = 1;
        for(int i = 1; i<=n ; i++)
        {
            fact = fact*i;
        }
        return fact;
    }
}
