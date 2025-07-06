#include<iostream>
using namespace std;

class Product {
public:
    int id;
    string name;
    float price;

    Product() {} // Default constructor needed for array initialization

    Product(int pid, string pname, float pprice) {
        id = pid;
        name = pname;
        price = pprice;
    }

    void display() {
        cout << "Product ID: " << id << ", Name: " << name << ", Price: ₹" << price << endl;
    }
};

class Cart {
private:
    Product products[10]; // Fixed size array for cart
    int productCount = 0; // Tracks number of products added

public:
    void addProduct(Product p) {
        if (productCount < 10) {
            products[productCount] = p;
            productCount++;
            cout<<"Cart conatin total item : "<<productCount<<endl;
            cout << p.name << " added to cart!" << endl;
        } else {
            cout << "Cart is full! Cannot add more products." << endl;
        }
    }

    void showCart() {
        cout << "\n--- Your Cart ---\n";
        float total = 0;
        for (int i = 0; i < productCount; i++) {
            products[i].display();
            total += products[i].price;
        }
        cout << "Total Amount: ₹" << total << endl;
    }
};

// User Class
class User {
public:
    string username;
    Cart cart;
    int count = 0;
     
    User(string uname) {
        username = uname;
        count++;
    }
   void countuser()
   {
       
       
   }
    void addToCart(Product p) {
        cart.addProduct(p);
    }

    void viewCart() {
        cout << "\nUser: " << username << endl;
        cart.showCart();
    }
};


int main() {
   
    Product p1(101, "Laptop", 55000);
    Product p2(102, "Smartphone", 20000);
    Product p3(103, "Headphones", 1500);

    
    User user1("ABC");
    user1.addToCart(p1);
    user1.addToCart(p3);
    user1.viewCart();
    
    User user2("XYZ");
    user2.addToCart(p1);
    user2.addToCart(p2);
    user2.viewCart();
    return 0;
}
