package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class SumOfNum {
    public static void main(String[] args) {
        int Number = 13211;
        int sum = 0;
        while (Number > 0)
        {
            int rem = Number % 10;
            sum = sum + rem;
            Number = Number / 10;
        }
        System.out.println(sum);
    }
}
