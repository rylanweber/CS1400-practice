#include <iostream>
#include <string>
#include "author.h"

using namespace std;

class Book {
    private:
        string title;
        int year;
        Author author;
    
    public:
        Book(const string& title, int year, const Author& author) : title(title), year(year), author(author) {}

        string getTitle() const {
            return title;
        }
        int getYear() const {
            return year;
        }
        Author getAuthor() const {
            return author;
        }

        void setTitle(const string& title) {this->title = title;}
        void setYear(int& year) {this->year = year;}
        void setAuthor(const Author& author) {this->author = author;}

        void show() const {
            cout << "Book: " << title << " (" << year << ")" << '\n' << "   Author: " << author.getName() << " [" << author.getNationality() << "]" << endl;
        }
};

int main() {
    Author author1("George Orwell", "British");
    Book book1("1984", 1949, author1);

    book1.show();

    return 0;
}