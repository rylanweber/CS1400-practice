#include <iostream>
#include <string>
#include "author.h"
#include "book.h"

using namespace std;

int main() {
    Author author1("George Orwell", "British");
    Book book1("1984", 1949, author1);

    book1.show();

    return 0;
}