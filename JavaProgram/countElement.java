public class countElement {
    public static void main(String[] args) {
        int arr[]  = {1,2,0,2,0,0};
        int  acc [] = new int[arr.length];
        for (int i = 0; i < arr.length;i++)
        {
            int count = 0;
            for (int j = 0; j<arr.length;j++)
            {
                if(i == arr[j])
                {
                    count++;
                }
            }
            acc[i] = count;
            System.out.print(acc[i] + " ");
        }
    }
}
