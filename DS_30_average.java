import java.util.Scanner;

public class DS_30_average
{
          public static void main(String[] args)
          {
                    Scanner scanner = new Scanner(System.in);
                    
                    System.out.print("Enter the 3 numbers: ");
                    
                    int n1 = scanner.nextInt();
                    
                    int n2 = scanner.nextInt();
                    
                    int n3 = scanner.nextInt();
                    
                    float average = (n1+n2+n3)/3;
                    
                    System.out.print("The average of the numbers is: "+average+".\n");
          }
}
