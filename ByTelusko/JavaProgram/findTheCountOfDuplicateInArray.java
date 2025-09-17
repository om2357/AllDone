package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class findTheCountOfDuplicateInArray {
    public static void main(String[] args) {
        int arr[] = {1, 5, 1, 2, 5, 1, 3};
        for (int i = 0; i < arr.length; i++) {
            int count = 0;
            for (int j = 0; j < arr.length; j++) {
                if (arr[i] == arr[j]){
                    count++;
                }
            }
            if (count > 1) {
                System.out.println(arr[i] + " is repeated " + count + " times");
            }
        }
    }
}
