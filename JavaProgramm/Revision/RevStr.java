package AllDone.JavaProgramm.Revision;

public class RevStr {
    public static void main(String[] args) {
        String name = "abcdef";
        for(int i = name.length()-1;i >= 0; i--)
        {
            System.out.print(name.charAt(i));
        }
    }
}
