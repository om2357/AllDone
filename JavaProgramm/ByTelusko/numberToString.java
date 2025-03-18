package AllDone.JavaProgramm.ByTelusko;


import java.util.Scanner;

public class numberToString {


    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner sc = new Scanner(System.in);
        
        int number = sc.nextInt();
        String s = Integer.toString(number);
        if(number <= 100 && number >= -100)
        {
            s.valueOf(number);
            System.out.println(number);
            System.out.println("Good job");
        }
        else{
            System.out.println("Wrong answer");
        }
        int a = 10, b= -20;
        System.out.println(a^b);

        // write a program to calculaate sum of all numbers from 1 to n

        int n = 10;
        int sum = 0;        
        for(int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        System.out.println("Sum of all numbers from 1 to n is: " + sum);




        
    }
}
