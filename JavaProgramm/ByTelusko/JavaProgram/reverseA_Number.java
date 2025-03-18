package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class reverseA_Number
{
    public static void main(String[] args) {

        int num = 12351;
        int reverseNumber = 0;
        while(num != 0)
        {
            int rem = num % 10;
            reverseNumber = reverseNumber * 10 + rem;
            num = num / 10;

        }
        System.out.println(reverseNumber);
    }
}