package AllDone.JavaProgramm.ByTelusko.JavaProgram;

public class fatchTheDigit {
    public static void main(String[] args) {
        int num = 13242;
        int temp = num;

        while (num != 0) {
            int rem = num % 10;
            num = num / 10;
            System.out.println(rem);
        }

    }
}
