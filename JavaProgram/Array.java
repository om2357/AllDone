public class Array {
    public static void main(String[] args) {
        int arr[] = {5, 2, 1, 4, 3};
        for (int i = 0; i < arr.length; i++)
        {
            if(arr[i] % 2 == 1)
            {
                System.out.println(arr[i]);
            }
        }
    }
}
