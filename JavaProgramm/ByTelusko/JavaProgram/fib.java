package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class fib {
    public static void main(String[] args) {
       int a = 0;
       int b = 1;
       int c = 0;
       int fib = 10;

       for(int i = 1; i< fib; i++)
       {
           c = a+b;
           System.out.println(" " + c);
           a = b;
           b = c;
       }
    }
}
