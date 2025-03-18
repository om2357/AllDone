package AllDone.JavaProgramm.Revision;

public class PassBy {
    static void pass(int a, int b)
    {
        int c = a + b;
        System.out.println(" Sum is " + c);
    }

    public static void main(String[] args) {
        pass(2, 4);
    }
}
