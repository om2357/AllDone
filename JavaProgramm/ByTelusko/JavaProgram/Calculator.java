package AllDone.JavaProgramm.ByTelusko.JavaProgram;
class Demo{
    public int add(int a, int b )
    {
        int result = a + b;
        return result;
    }
}
class Hi{
    public static int addd(int a, int b)
    {
        int result = a + b;
        return result;
    }
}

public class Calculator {
    public static void main(String[] args) {
        Demo obj = new Demo();
        System.out.println(obj.add(10, 21));        System.out.println(Hi.addd(10 , 10));
    }
}
