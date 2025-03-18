package AllDone.JavaProgramm.ByTelusko.JavaProgram;
class Sum{
    public int Sum1(int add, int add2)
    {

        System.out.println(add + add2);
        return 0 ;
    }
}
public class revision {

    public static void main(String[] args) {
        int add1 = 10;
        int add2 = 10;

        Sum add = new Sum();
        add.Sum1(add1, add2);
    }
}