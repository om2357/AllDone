package AllDone.JavaProgramm.ByTelusko.JavaProgram;
class Bhukhad
{
    static void need_Food(Zomato z2)
    {
        z2.Food();
    }
}
class Zomato
{
    void Food()
    {
        System.out.println("take food");
    }
}
public class DeliveryBoy {
    public static void main(String[] args) {

        Zomato z1 = new Zomato();
        Bhukhad.need_Food(z1);
    }
}
