import java.util.Scanner;

public class DS_30_rectangle
{
          public static void main(String[] args)
          {
                    Scanner scanner = new Scanner(System.in);
                    
                    int rno = 30;
                    
                    System.out.print("Enter the length: ");
                    
                    int length = scanner.nextInt();
                    
                    System.out.print("Enter the breadth: ");
                    
                    int breadth = scanner.nextInt();
                    
                    int perimeter = 2*(length+breadth);
                    
                    System.out.print("The perimeter is: " + perimeter + "m.\n");
                    
                    length = length * rno;
                    breadth = breadth * rno;
                    
                    int area = length * breadth;
                    
                    System.out.print("The area when multiplied with roll no. "+ 30 +" is: "+ area+"sq.m.\n");
          }
}
