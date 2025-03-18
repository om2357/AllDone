package AllDone.JavaProgramm.ByTelusko.JavaProgram;
public class GlobalVariable {
    int emp_id;
    String emp_name;
    GlobalVariable(int emp_id, String emp_name)
    {
        this.emp_id = emp_id;
        this.emp_name = emp_name;
    }
    public static void main(String[] args) {
        GlobalVariable g1 = new GlobalVariable(234, "Om Kumar");
        System.out.println("Emp id is -> " + g1.emp_id + " Emp name -> " + g1.emp_name);

    }
}
