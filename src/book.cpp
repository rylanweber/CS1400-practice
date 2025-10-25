#include "author.h"
#include "book.h"

Book::Book(const std::string& title, int year, const Author& author) : title(title), year(year), author(author) {}

std::string Book::getTitle() const {
    return title;
}
int Book::getYear() const {
    return year;
}
Author Book::getAuthor() const {
    return author;
}

void Book::setTitle(const std::string& title) {this->title = title;}
void Book::setYear(int& year) {this->year = year;}
void Book::setAuthor(const Author& author) {this->author = author;}

void Book::show() const {
    std::cout << "Book: " << title << " (" << year << ")" << '\n' << "   Author: " << author.getName() << " [" << author.getNationality() << "]" << std::endl;
}