package AllDone.JavaProgramm.Kunal;

public class Ques {
    public static void main(String[] args) {
        String str = "OOPD Programs!";
        str.concat(" are to be written in Java Only");
        System.out.println(str.concat(" are to be written in Java Only"));
        System.out.println(" Message = " + str);
        int index1 = str.charAt(0);
        int index2 = str.charAt(10);
        System.out.println("The character at position 0 is " + (char)index1);
        System.out.println("The character at position 10 is " +(char)index2);
    }
}
