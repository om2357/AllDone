package AllDone.JavaProgramm.ByTelusko.JavaProgram;
class Main {
    static void fib(int num) {
        int a = 0;
        int b = 1;
        int c;
        int ans = num;
        for (int i = 2; i <= ans; i++) {
            c = a + b;
            a = b;
            b = c;
            System.out.println(c);
        }

    }
        public static void main (String[]args)
        {
            System.out.println("*** main Start***");
            int num = 10;
            fib(num);
            System.out.println("*** main End ***");
        }
    }