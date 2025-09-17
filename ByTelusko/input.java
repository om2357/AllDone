package AllDone.JavaProgramm.ByTelusko;
import java.net.SocketTimeoutException;
import java.util.Scanner;

public class input
{
    public static void main(String [] args)
    {
        System.out.println("Please Enter a Number");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        System.out.println("Your number is :- " + number);

        Scanner sc2 = new Scanner(System.in);
        char a = sc2.next().charAt(0);
        String string = sc2.nextLine();
        System.out.println("your second input for Char is :-" + a);
        System.out.println("your second input for String is :-" + string);
    }
}