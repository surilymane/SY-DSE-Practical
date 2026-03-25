import java.util.Scanner;

public class DS_30_method_overload
{
  public static void main(String[] args)
  {
    Scanner scanner = new Scanner(System.in); 
    
    ShippingCalculator ob1 = new ShippingCalculator();
    
    int choice;
    
    do
    {
      System.out.print("Enter\n0 to exit\n1 for weight in kilograms\n2 for weight in grams\n3 for weight in terms of \"light\", \"medium\" or \"heavy\": ");
      
      choice = scanner.nextInt();
      
      switch (choice)
      {
        case 0:
        {
          System.out.print("Terminating Program.");
          break;
        }
        
        case 1:
        {
          System.out.print("Enter weight in kgs: ");
          int weight = scanner.nextInt();
          ob1.calculateShippingCost(weight);
          ob1.displayShippingCost();
          
          break;
        }
        
        case 2:
        {
          System.out.print("Enter weight in grams: ");
          double weight = scanner.nextInt();
          ob1.calculateShippingCost(weight);
          ob1.displayShippingCost();
          
          break;
        }
        
        case 3:
        {
          System.out.print("Enter weight category: ");
          String weight = scanner.next();
          if(!weight.equals("light")&&!weight.equals("medium")&&!weight.equals("heavy"))
          {
            System.out.print("Invalid Input.\n");
          }
          else
          {
            ob1.calculateShippingCost(weight);
            ob1.displayShippingCost();
          }
          
          break;
        }
        
        default:
        {
          System.out.print("Invalid Choice. Please enter again.\n");
        }
      }
    }while(choice != 0);
  }
}

class ShippingCalculator
{
  private double shippingCost;
  
  ShippingCalculator()
  {
    shippingCost = 0;
  }
  
  void displayShippingCost()
  {
    System.out.print("Shipping cost is: $"+shippingCost+"\n");
  }
  
  void calculateShippingCost(int weight)
  {
    shippingCost = 5*weight;
  }
  
  void calculateShippingCost(double weight)
  {
    shippingCost = 0.005*weight;
  }
  
  void calculateShippingCost(String weight)
  {
    if(weight.equals("light"))
    {
      shippingCost = 10;
    }
    else if(weight.equals("medium"))
    {
      shippingCost = 20;
    }
    else
    {
      shippingCost = 50;
    }
  }
}
