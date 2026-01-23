import java.util.Scanner;

public class DS_30_fibonacci
{
          public static void main(String[] args)
          {
                    Scanner scanner = new Scanner(System.in);
                    
                    System.out.print("Enter the roll no.: ");
                    
                    int rno = scanner.nextInt();
                    
                    int n1 = 0;
                    int n2 = 1;
                    
                    System.out.print("Fibonacci sequence:\n"+n1);
                    
                    while(n2 < rno)
                    {
                              System.out.print(" "+n2);
                              
                              int temp = n1;
                              n1 = n2;
                              n2 = temp+n2;
                    }
                    
                    System.out.print("\n");
          }
}
