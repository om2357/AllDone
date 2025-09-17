package AllDone.JavaProgramm.Kunal;

import java.util.Scanner;

public class MaxNumBW3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
//        int max = a;
//
//        if(b > max){
//            max = b;
//        }
//        if(c > max){
//            max = c;
//        }
//        System.out.println(" your max num is :- " + max);

        int max = 0;
        if(a > b)
        {
            max = a;
        }
        else{
            max = b;
        }
        if(c > max)
        {
            max = c;
        }
        System.out.println("Your max value is = " + max);
    }

}
