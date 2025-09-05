#include <iostream>
using namespace std;

class Library {
    string book_name;
    int book_price;

public:
    void input(string name, int price) {
        book_name = name;
        book_price = price;
    }

    void show_details() {
        cout << "Book Name = " << book_name << endl;
        cout << "Book Price = " << book_price << endl;
    }

    int get_price() {
        return book_price;
    }

    string get_name() {
        return book_name;
    }
};

int main() {
    Library books[3];

    
    books[0].input("C++ Programming", 450);
    books[1].input("Data Structures", 600);
    books[2].input("Operating System", 550);

    
    for (int i = 0; i < 3; i++) {
        books[i].show_details();
        cout << "-----------------" << endl;
    }

   
    int max_index = 0;
    for (int i = 1; i < 3; i++) {
        if (books[i].get_price() > books[max_index].get_price()) {
            max_index = i;
        }
    }

    cout << "The most expensive book is: " << books[max_index].get_name()
         << " with price " << books[max_index].get_price() << endl;
         
    return 0;
}