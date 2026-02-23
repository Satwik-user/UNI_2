import java.util.Scanner;

class Item {
    int code;
    double price;
    
    Item(int code, double price) {
        this.code = code;
        this.price = price;
    }
    
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Item items[] = new Item[5];
        double total = 0;
        
        System.out.println("Code\tPrice");
        for(int i = 0; i < 5; i++) {
            int code = sc.nextInt();
            double price = sc.nextDouble();
            items[i] = new Item(code, price);
            System.out.println(code + "\t" + price);
            total += price;
        }
        
        System.out.println("Total: " + total);
    }
}