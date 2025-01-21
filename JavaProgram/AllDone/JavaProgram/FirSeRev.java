public class FirSeRev {
    public static void main(String[] args) {
        int num = 32422;
        int rever = 0;
        while(num != 0)
        {
            int rem = num % 10;
            rever = rever * 10 + rem;
            num = num / 10;
        }
        System.out.println(rever);
    }
}
