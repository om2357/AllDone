public class strongNumber {
    public static void main(String[] args) {
        int num = 145;
        int temp = num;
        int sum = 0;

        while (num != 0) {
            int rem = num % 10;
            sum = sum + fact(rem);
            num = num / 10;
        }
        System.out.println(sum);
        if(temp == sum)
        {
            System.out.println("Number is Strong number"+ sum);
        }
        else {
            System.out.println("not a strong number");
        }


    }

    static int fact(int n) {
        int fact = 1;
        for (int i = n; i >= 1; i--) {
            fact = fact*i;
        }
        return fact;

    }

}

