package AllDone.JavaProgramm.ByTelusko;

import java.util.Scanner;
public class reverse_revision {
    public static void main(String [] args)
    {
        System.out.println("Please enter the number for reverse the value -:");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();

        System.out.println("Your number is : " + number);
        int reverse = 0;

        while(number > 0)
        {
            int reminder = number % 10;
            reverse = reverse * 10 + reminder;
            number = number / 10;

        }
        System.out.println("your Reverse number is :- " + reverse);
    }
}
