package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class ReverseNum {
    public static void main(String[] args) {
        int Number = 12345;
        int Rev = 0;

        while(Number != 0)
        {
            int rem = Number % 10;
            Rev = Rev * 10 + rem;
            Number  = Number / 10;

        }
        System.out.println(Rev);
    }
}
