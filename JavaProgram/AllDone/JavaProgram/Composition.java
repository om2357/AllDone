class Sample
{
    int x = 20;
    void fo()
    {
        System.out.println("Heloo Composition"+ x);
    }
}

public class Composition{
    public static void main(String[] args) {
        Sample s1 = new Sample();
        s1.fo();
        System.out.println(s1.x);
    }
    
}
