package AllDone.JavaProgramm.Kunal;

import java.util.Scanner;

public class MMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("please enter the value of row");
        int row = sc.nextInt();
        System.out.println("Enter value for Column");
        int column = sc.nextInt();
        int [] [] matrix = new int [row][column];
        for(int i = 0; i<row; i++)
        {
            for(int j = 0 ; j<column; j++)
            {
                matrix[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
            {
                System.out.print(matrix[i][j]+ " ");
            }
            System.out.println();
        }
    }
}
