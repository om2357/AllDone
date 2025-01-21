public class LinearSearch {
    public static void main(String[] args) {
        int arr[] = {5, 2, 1, 4, 3};

            int find = 4;
            for(int i = 0; i< arr.length; i++)
            {
                if(find == arr[i])
                {
                    System.out.println("Find Number " + arr[i]);
                }
            }


    }
}
