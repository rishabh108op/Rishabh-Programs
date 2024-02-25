import java.util.Scanner;

public class calculator {
    public static void main(String[] args)
    {
        float op1,op2,result;
        char op;
        System.out.println("Enter the operand 1 and operand 2");
        try (Scanner sc = new Scanner(System.in)) {
            op1=sc.nextFloat();
            op2=sc.nextFloat();
            System.out.println("Enter the operation");
            op=sc.next().charAt(0);
        }
        switch(op)
        {
            case '+':
                result=op1+op2;
                System.out.println("Sum="+result);
                break;
            case '-':
                result=op1-op2;
                System.out.println("Sum="+result);
            case '*' :
                result=op1*op2;
                System.out.println("mul="+result);
                break;
            case '/' :
                result=op1/op2;
                System.out.println("mul="+result);
                break;
            case '%' :
                result=op1%op2;
                System.out.println("mul="+result);
                break;
            default: System.exit(0);
        }
    }
}
