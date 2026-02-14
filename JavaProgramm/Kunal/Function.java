package AllDone.JavaProgramm.Kunal;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Function {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int sum = num1 + num2;
        System.out.println("your sum value is " + num1 + " + " + num2 + " = "+ sum );

        System.out.println("Calling the function");
        sum();
        System.out.println("Calling second fun");
        sum2();
    }
    static int sum2()
    {
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int sum = num1 + num2;
        System.out.println("your sum value is " + num1 + " + " + num2 + " = "+ sum );
        return sum;

    }
    static void sum()
    {
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int sum = num1 + num2;
        System.out.println("your sum value is " + num1 + " + " + num2 + " = "+ sum );
    }

}
