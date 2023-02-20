
class Shiker
{
    static void need_job(Recruter R2)
    {
        R2.job();
    }
}
class Recruter
{
    void job()
    {
        System.out.println("JoB is there");
    }
}
public class Indeed {
    public static void main(String[] args) {

        Recruter R1 = new Recruter();
        Shiker.need_job(R1);
    }
}
