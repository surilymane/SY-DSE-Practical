import java.util.Scanner;

public class DS_30_int_binary
{
          public static void main(String[] args)
          {
                    Scanner scanner = new Scanner(System.in);
                    
                    System.out.print("Enter the number: ");
                    
                    int num = scanner.nextInt();
                    
                    System.out.print("Integer: "+num+"\nBinary: "+Integer.toBinaryString(num)+"\n");
          }
}
