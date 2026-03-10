import java.util.Scanner;

class Rational
{
    int num;
    int den;
    
    Rational(int n, int d)
    {
        num = n;
        den = d;
    }
    
    public static void display(Rational num)
    {
        System.out.print(num.num+"/"+num.den+"\n");
    }
    
    public static Rational add(Rational num1, Rational num2)
    {
        if(num1.den == num2.den)
        {
            int n = num1.num + num2.num;
            int d = num1.den;
            
            Rational add = new Rational(n, d);
            
            return add;
        }
        else
        {
            int n = (num1.num*num2.den) + (num2.num*num1.den);
        
            int d = (num1.den*num2.den);
        
            Rational add = new Rational(n, d);
            
            return add;
        }
    }
    
    public static Rational sub(Rational num1, Rational num2)
    {
        if(num1.den == num2.den)
        {
            int n = num1.num - num2.num;
            int d = num1.den;
            
            Rational sub = new Rational(n, d);
            
            return sub;
        }
        else
        {
            int n = (num1.num*num2.den) - (num2.num*num1.den);
        
            int d = (num1.den*num2.den);
        
            Rational sub = new Rational(n, d);
            
            return sub;
        }
    }
    
    public static Rational mult(Rational num1, Rational num2)
    {
        int n = num1.num * num2.num;
        int d = num1.den * num2.den;

        Rational mul = new Rational(n, d);

        return mul;
    }
    
    public static Rational div(Rational num1, Rational num2)
    {
        int n = num1.num * num2.den;
        int d = num1.den * num2.num;
        
        Rational div = new Rational(n, d);
        
        return div;
    }
}


public class TestRational {
    public static void main(String[] args) {
        // Create objects of Rational class
        Scanner scanner = new Scanner(System.in);
        int num1, den1;
        int num2, den2;

        // Read input for first rational number
        System.out.println("Enter numerator and denominator for the first rational number:");
        //scanner.nextLine();
        num1 = scanner.nextInt();
        //scanner.nextLine();
        den1 = scanner.nextInt();
        //scanner.nextLine();
        if(den1 == 0)
        {
            System.out.print("Denominator cannot be 0. Setting denominator to 1.\n");
            
            den1 = 1;
        }
        Rational r1 = new Rational(num1, den1);
        

        // Read input for second rational number
        System.out.println("Enter numerator and denominator for the second rational number:");
        //scanner.nextLine();
        num2 = scanner.nextInt();
        //scanner.nextLine();
        den2 = scanner.nextInt();
        //scanner.nextLine();
        if(den2 == 0)
        {
            System.out.print("Denominator cannot be 0. Setting denominator to 1.\n");
            
            den2 = 1;
        }
        Rational r2 = new Rational(num2, den2);
        

        // Display the two rational numbers
        System.out.print("First Rational Number: ");
        Rational.display(r1);
       
        System.out.print("Second Rational Number: ");
        Rational.display(r2);
      
        
        Rational addition = Rational.add(r1, r2);
      
        System.out.print("Addition of the two rational numbers: ");
        
        Rational.display(addition);

        Rational subtract = Rational.sub(r1, r2);
     
        System.out.print("Subtraction of the two rational numbers: ");
        
        Rational.display(subtract);

        Rational multiply = Rational.mult(r1, r2);
     
        System.out.print("Multiplication of the two rational numbers: ");
        
        Rational.display(multiply);
        
        System.out.print("Division of the two rational numbers: ");
        if(r2.num == 0)
        {
            System.out.print("Error: Cannot divide by zero.\n");
        }
        else
        {
            Rational division = Rational.div(r1, r2);
            Rational.display(division);
        }


        scanner.close();
    }
}
