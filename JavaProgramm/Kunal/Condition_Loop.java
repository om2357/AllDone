package AllDone.JavaProgramm.Kunal;

import java.util.Scanner;

public class Condition_Loop {
    public static void main(String[] args) {
        // print number 1 to 5
//        int num;
//        Scanner sc = new Scanner(System.in);
//        num = sc.nextInt();
//
//        for(int i = 0; i< num; i++)
//        {
//            System.out.println("your Number is : " + i);
//        }
//        System.out.println("Printing Done");

        // while loop: When you don't know how many time loop runs

//        int num = 1;
//        System.out.println("Enter your value --> ");
//        Scanner sc = new Scanner(System.in);
//        int Value = sc.nextInt();
//        while(num < Value)
//        {
//            System.out.println("Hello --> "+ num);
//            num++;
//        }

        // do While Loop : It will execute at least one Time
        int n = 1;
        do{
            System.out.println("Hello World");
            n++;
        }while(n < 10);
    }
}
