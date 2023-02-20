package Polly;

public class Customer {
    public static void main(String[] args) {
        TikToker t1 = new TikToker();
        Plumber p1 = new Plumber();
        TaxiDriver d1 = new TaxiDriver();
        Dalal.access(t1);
        Dalal.access(p1);
        Dalal.access(d1);
    }
}
