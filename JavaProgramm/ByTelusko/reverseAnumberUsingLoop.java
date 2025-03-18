package AllDone.JavaProgramm.ByTelusko;
import java.util.Scanner;



public class reverseAnumberUsingLoop {
    
    public static void main(String[] args)
    {
        System.out.println("Please enter the number for reverse the digit");

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println("Your number is - " + num);
        int reverse = 0;
        while(num>0)
        {
            int reminder = num % 10;
            reverse = reverse * 10 + reminder;
            num = num / 10;
        }
        System.out.println("Your number is = " + reverse);
    }
}
