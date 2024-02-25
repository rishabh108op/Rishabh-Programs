import java.util.Scanner;

public class demo extends practice {
    String ex;
 void read()
    {
        Scanner sc= new Scanner(System.in);
        super.create();
        System.out.println("Enter experiemce");
        ex=sc.nextLine();
    }
    void print()
    {
        super.display();
        System.out.println("ex");
    }
}