package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class Unique {
    public static void main(String[] args) {
        int arr [] = {1, 2, 8, 4, 3, 4, 2};

        for(int i = 0; i< arr.length; i++)
        {
            int count = 0;
            for (int j = 0; j< arr.length;j++)
            {
                if(arr[j]== arr[i])
                {
                    count++;
                }
            }
            if (count == 1)
            {
                System.out.println(arr[i]+" unique is" + count);
            }
        }
    }
}
