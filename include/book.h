#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <string>

#include "author.h"

class Book {
    private:
        std::string title;
        int year;
        Author author;
    
    public:
        Book(const std::string& title, int year, const Author& author);

        std::string getTitle() const;
        int getYear() const;
        Author getAuthor() const;

        void setTitle(const std::string& title);
        void setYear(int& year);
        void setAuthor(const Author& author);

        void show() const;
};

#endif