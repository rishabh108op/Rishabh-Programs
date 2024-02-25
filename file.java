import java.io.*;
import javax.swing.JOptionPane;
import java.io.FileInputStream;
public class file {
    public static void main(String[] args) throws IOException {
        String filename = JOptionPane.showInputDialog("Enter File name");
        filename = "C:\\Users\\rishabh\\OneDrive\\Desktop\\"+filename;
        File f = new File(filename);
        System.out.println("File exists " + f.exists());
        System.out.println("File is readablr " + f.canRead());
        System.out.println("File is writable " + f.canWrite());
        System.out.println("Is a directory " + f.isDirectory());
        System.out.println("Length of the file is " + f.length());
        try
        {
            char ch;
            StringBuffer buff = new StringBuffer("");
            FileInputStream fis = new FileInputStream(filename);
            while (fis.available() != 0)
            {
                ch = (char) fis.read();
                buff.append(ch);
            }
            System.out.println("\nContents of file are");
            System.out.println(buff);
        }
        catch (FileNotFoundException e)
        {
            System.out.println("Cannot find the specified file");
        }
        catch (IOException i) 
        {
            System.out.println("Cannot read file");
        }
    }
}
