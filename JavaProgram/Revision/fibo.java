package Revision;

public class fibo {
    public static void main(String[] args) {
        int num = 10;
        int a = 0;
        int b = 1;
        int c = 0;
        System.out.print(a + " " + b + " " );
        for(int i = 0; i<num; i++)
        {
            c = a + b;
            a = b;
            System.out.print(c+" ");
            b = c;


        }
    }
}
