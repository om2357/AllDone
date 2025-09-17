package AllDone.JavaProgramm.ByTelusko;
import java.util.Scanner;

public class paralellogram {

    static{
        Scanner sc = new Scanner(System.in);
        int height = sc.nextInt();
        int breath = sc.nextInt();
        int area;
        if (height > 0 && breath > 0)
        {
            area = (height*breath);
            System.out.println(area);
        }
        else{
            System.out.println("please enter greater tham 1");
        }
        
    }
    public static void main(String[] args) {
        System.out.println("hello");
    }
}
