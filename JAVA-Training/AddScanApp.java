import java.*;
import java.util.Scanner;
public class AddScanApp
{
     public static void main(String[] args) {
    Scanner xyz=new Scanner(System.in);
    int a,b,c;
    System.out.println("Enter the two values");
    a=xyz.nextInt();
    b=xyz.nextInt();
    c=a+b;
    System.out.printf("Addition is %d\n",c);
    
        
    }
}