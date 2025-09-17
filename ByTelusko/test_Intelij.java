package AllDone.JavaProgramm.ByTelusko;

public class test_Intelij {

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
