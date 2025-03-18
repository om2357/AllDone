package AllDone.JavaProgramm.ByTelusko.JavaProgram;

class Mom
{
    static void need_Food(Papa p2)
    {
        p2.Food();
    }
}
class Papa
{
    void Food()
    {
        System.out.println("Go Market");
    }
}
public class Market {
    public static void main(String[] args) {

        Papa p1 = new Papa();
        Mom.need_Food(p1);
    }
}
