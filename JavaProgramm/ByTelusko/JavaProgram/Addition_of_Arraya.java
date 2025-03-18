package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class Addition_of_Arraya {
    public static void main(String[] args) {
            int arr[] = {5, 2, 1, 4, 3};
            int sum = 0;
            for (int i = 0; i < arr.length; i++)
            {
                if(arr[i] % 2 == 1)
                {
                    sum = sum + arr[i];
                    System.out.println("Odd"+arr[i]);
                }
            }
            System.out.println(sum);
    }
}
