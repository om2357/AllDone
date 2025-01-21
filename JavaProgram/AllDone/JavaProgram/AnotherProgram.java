public class AnotherProgram {
    public static void main(String[] args) {
        int arr[] = {151, 142, 131, 126, 124};

        int StoreTheNumber = 0;
        for(int i = 0; i < arr.length; i++)
        {
//            System.out.println(arr[i]);
            StoreTheNumber = StoreTheNumber+sum(arr[i]);
        }
        System.out.println(sum(123));
        int number = StoreTheNumber;
        System.out.println(number);
        int reve = reverse(number);
        System.out.println(reve);
    }

    static int reverse(int y)
    {
        int num = 0;
        while(y!=0)
        {
           int digit = y % 10;
           num = num * 10 + digit;
           y =  y / 10;
        }
        return num;
    }
    static int sum(int x)
    {
        int digit = 0;
        while(x > 0)
        {
            digit = digit + x % 10;
            x = x / 10;
        }
        return digit;
    }
//    static int sum(int x)
//    {
//        int digit = 0;
//        while(x>0)
//        {
//            digit = digit + x % 10;
////          sum =+ digit;
//            x = x / 10;
//        }
//        return digit;
//    }

}
