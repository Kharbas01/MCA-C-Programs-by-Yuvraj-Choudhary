#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class Book { 
private:
    string name;
    int price;

public:
   
    Book(string bookName, int bookPrice) {
        name = bookName;
        price = bookPrice;
    }

    void showDetails() {
        cout << "  - Title: " << name << ", Price: $" << price << endl;
    }

   
    int getPrice() {
        return price;
    }
    
   
    string getName() {
        return name;
    }
};

int main() {
   
    Book library[3] = {
        Book("C++", 450),
        Book("Data ", 600),
        Book("Os", 550)
    };

    cout << "--- Library Inventory ---" << endl;
    for (int i = 0; i < 3; ++i) {
        library[i].showDetails();
    }
    cout << "------------------------\n" << endl;


  
    int maxPriceIndex = 0; 

   
    for (int i = 1; i < 3; ++i) {
        if (library[i].getPrice() > library[maxPriceIndex].getPrice()) {
            
            maxPriceIndex = i;
        }
    }

    
    cout << "The most expensive book is:" << endl;
    cout << "Title: " << library[maxPriceIndex].getName() << endl;
    cout << "Price: $" << library[maxPriceIndex].getPrice() << endl;

    return 0;
}