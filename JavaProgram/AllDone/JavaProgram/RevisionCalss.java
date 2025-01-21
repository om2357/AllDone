class Add{
    public int add()
    {
        int a =  100;
        int b = 10;

        int result = a + b;
        System.out.println(result);

        return 20;
    }
}

public class RevisionCalss {

    public static void main(String args[])
    {
        int add = 4;
        int add2 = 5;

        Add ad= new Add();
        System.out.println(ad.add());
    }
}