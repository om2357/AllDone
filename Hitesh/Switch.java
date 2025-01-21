
import java.util.Scanner;

public class Switch {
    public static void main(String[] args) {
        System.out.println("Enter the value");
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();

        System.out.println(x);
        String result = null;

        if(x > 10)
        {
            System.out.println("please enter valid number ");
        }
        else
        {
            switch (x)
            {
                case 1 : result = "I";
                System.out.println("Your Result is : " + result);
                    break;

                case 2 : result = "II";
                    break;

                case 3 : result = "|||";
                    break;

                case 4 : result = "|v";

                    break;

                case 5 : result = "v";
                    break;

                case 6 : result = "v|";
                    break;


                case 7 : result = "v||";
                    break;

                case 8 : result = "v|||";
                    break;

                case 9 : result = "|x";
                    break;

                case 10 : result = "x";
                    break;

                default:
                    System.out.println("please enter valid number ");
            }
        }

    }
}
