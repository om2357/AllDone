package AllDone.JavaProgramm.Revision;

public class Employee {
    int Num;
    int classs;
    int RollNum;
    Employee(int Num, int classs, int RollNum)
    {
        this.Num = Num;
        this.classs = classs;
        this.RollNum = RollNum;
    }
    public static void main(String[] args) {

        Employee E1 = new Employee(23, 11, 323);
        System.out.println("Employee Number is "+E1.Num +" Employee Class is  " + E1.classs + "Employee RollNum -> " + E1.classs);
    }
}
