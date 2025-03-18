package AllDone.JavaProgramm.ByTelusko;
public class array1st {
    public static void main(String[] args)

    {
        System.out.println("your array");

        int []marks;
        marks = new int[5];

        marks[0] = 33;
        marks[1] = 354;
        marks[3] = 35;

        for(int i = 0; i< marks.length; i++)
        {
            System.out.println("your array allocation of indax " + i + " is -  " + marks[i]);
        }

        int [] maths = {1 ,32, 56, 36, 65};
        for(int i = 0; i<maths.length; i++)
        {
            System.out.println("Your arra is - "+  maths[i]);
        }
    }
}
