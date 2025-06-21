package AllDone.JavaProgramm.ByTelusko;
import java.util.Scanner;

public class additonOfTwoNum {
    public static void main(String[] args)
    {
        System.out.println("hi");
        
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int add = 0;
        while (num>0) {
            int digit = num % 10;
            num = num/10;
            add = digit + add ;
            System.out.println(add);
        }
        System.out.println("Your addtion is - "+ add);
        // write this again in a better way
        
    }
}
