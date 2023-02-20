class Publicc
{
    static void Post(User p2)
    {
        p2.post();
    }
}
class User
{
    void post()
    {
        System.out.println("Upload Picture");
    }
}
public class insta {
    public static void main(String[] args) {

        User U1 = new User();
        Publicc.Post(U1);
    }
}
