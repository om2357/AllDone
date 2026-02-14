package AllDone.JavaProgramm.Kunal;

import java.util.Scanner;
public class Recursion {
    static void name(int number){
        int count = 0;
        if(count < number)

            return;

            System.out.println("Om Kumar");
            name(count++, number);


    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        name(number);

    }
}
