#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int availableCopies;
public:
    Book(string t, string a, int copies) {
        title = t;
        author = a;
        availableCopies = copies;
    }
    void issueBook() {
        if (availableCopies > 0) {
            availableCopies--;
            cout << "Book issued successfully." << endl;
        } else {
            cout << "No copies available." << endl;
        }
    }
    void returnBook() {
        availableCopies++;
        cout << "Book returned successfully." << endl;
    }
    void showInfo() {
        cout << "Title: " << title << ", Author: " << author 
             << ", Available Copies: " << availableCopies << endl;
    }
};

int main() {
    Book b("C++ Basics", "John Doe", 3);
    b.showInfo();
    b.issueBook();
    b.showInfo();
    b.returnBook();
    b.showInfo();
    return 0;
}
