public class practice {
    public static void main(String[]args){
        display(1);
    }
    static void display(int i)
    {
        System.out.println(i+"\n");
        i++;
        if(i==11)
        {
            System.exit(0);
        }
        display(i);

    }
}
