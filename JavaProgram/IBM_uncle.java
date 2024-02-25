class IBM_Aunty
{
    void job()
    {
        System.out.println("nothing");
    }
}
class Dinga {
    static void need_job(IBM_Aunty a2) {
    }
}
class Dingi
{
    static void need_job(IBM_Aunty a3)
    {
        a3.job();
    }
}
public class IBM_uncle {

    public static void main(String[] args) {
        IBM_Aunty a1 = new IBM_Aunty();
        Dinga.need_job(a1);
        Dingi.need_job(a1);
    }
}
