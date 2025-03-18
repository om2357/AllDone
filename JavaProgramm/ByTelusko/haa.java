package AllDone.JavaProgramm.ByTelusko;
import java.util.Scanner;

public class haa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int intValue = scanner.nextInt();
        double doubleValue = scanner.nextDouble();
        scanner.nextLine(); // Consume the newline character left by nextDouble()
        String stringValue = scanner.nextLine();

        System.out.println("String: " + stringValue);
        System.out.println("Double: " + doubleValue);
        System.out.println("Int: " + intValue);

        scanner.close();
    }
}