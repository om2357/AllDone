package AllDone.JavaProgramm.Kunal;

import java.util.Scanner;

public class fibonacci {
    public static void main(String[] args) {
        int a = 0, b = 1 ;

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for (int i = 0; i < num; i++)
        {
            int c = b + a;
            a = b;
            b = c;
            System.out.println(c);
        }


    }
}
