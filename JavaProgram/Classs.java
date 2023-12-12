class Computer
{
    public void playMusic()
    {
        System.out.println("play music Hello");
    }

    public String getMePen(int cost)
    {
        return "pen";
    }
}


public class classs {
    public static void main(String [] args)
    {
        System.out.println("Helllo");
        Computer obj = new Computer();
        obj.playMusic();
        System.out.println(obj.getMePen(10));
    }
}
