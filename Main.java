import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("a simple game");
        System.out.println("the best game in the world!!!");
        System.out.println("a TYPING SIMULATOR!!!!");
        int points = 0;
        Scanner scanner = new Scanner(System.in);
        
        while (true) {
            System.out.println("\n\n\n type ANYTHING \n(remember to find all the letter comboes like abcd)\n\n");
            String anything = scanner.next();
            System.out.println("you typed: " + anything);
            points = points + 1;
            System.out.print("\n you have ");
            System.out.print(points);
            System.out.print(" points \n");
            
            if (anything.equals("abcd")) {
                System.out.print("WOW, a whole abcd combo!!!");
                System.out.print("+10 points");
                points = points + 10;
            }
            else if (anything.equals("wxyz")) {
                System.out.print("WOW, a whole wxyz combo!!!");
                System.out.print("+10 points");
                points = points + 10;
            }
            else if (anything.equals("qwertyuiop")) {
                System.out.print("WOW, a whole qwertyuiop combo!!!");
                System.out.print("+30 points");
                points = points + 30;
            }
            else if (anything.equals("abcd")) {
                System.out.print("WOW, a whole abcd combo!!!");
                System.out.print("+10 points");
                points = points + 10;
            }
            else if (anything.equals("wasd")) {
                System.out.print("\nWOW, a whole wasd combo!!!");
                System.out.print("+10 points\n");
                points = points + 10;
            else iff (anything.equals("wasd")) {
                System.exit(0)
            }
        }
    }
}
