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
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    
    Library* books = new Library[n];

   
    for (int i = 0; i < n; i++) {
        string name;
        int price;
        cout << "\nEnter name of book " << i + 1 << ": ";
        cin.ignore();  
        getline(cin, name);
        cout << "Enter price of book " << i + 1 << ": ";
        cin >> price;
        books[i].input(name, price);
    }

    
    cout << "\n--- Book Details ---\n";
    for (int i = 0; i < n; i++) {
        books[i].show_details();
        cout << "-----\n";
    }

   
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (books[i].get_price() > books[max_index].get_price()) {
            max_index = i;
        }
    }

    cout << "\nThe most expensive book is: " << books[max_index].get_name()
         << " with price " << books[max_index].get_price() << endl;

   
    delete[] books;

    return 0;
}