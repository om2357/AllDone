package AllDone.JavaProgramm.ByTelusko;


import java.util.Scanner;

public class numberOfDigits {
    public static void main(String[] args)
    {
        System.out.println("Enter a Number for counting");

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int counting = 0;
        System.out.println(num);
        int add = 0 ;

        while(num>0)
        {
            System.out.println("Your number in side Loop " + num + " and counting - " + counting );
            num = num / 10;
            // System.out.println(num);
            
            counting++;
        }
        System.out.println("Your counting is = " + counting);
        
    }
    
}
