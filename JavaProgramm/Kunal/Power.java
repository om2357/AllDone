package AllDone.JavaProgramm.Kunal;

import java.util.Scanner;

public class Power {
    public static int findPower() {
        System.out.println("Please Enter the Value Of A");
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int b = sc.nextInt();
        int power = 1;
        for(int i = 0; i < b; i++)
        {
            power = power * A;
        }
        System.out.println("your power Value is "+ power);
        return power;
    }

}
