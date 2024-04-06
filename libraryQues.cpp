#include <bits/stdc++.h>
using namespace std;

class Book {
    private: 
        string title;
        string author;
        int year;

        friend class Fiction;
        friend class NonFiction;

    public:
        Book() {
            title = "-not initialized-";
            author = "-not initialized-";
            int year = 0;
        }

        Book (string title, string author, int year) {
            this->title = title;
            this->author = author;
            this->year = year;
        }

        string getTitle() {
            cout << this->title << endl;
            return this->title;
        }

        string getAuthor() {
            cout << this->author << endl;
            return this->author;
        }

        int getYear() {
            cout << this->year << endl;
            return this->year;
        }

        virtual void getData() {
            cout << title << endl;
            cout << author << endl;
            cout << year << endl;
        }
};

class Fiction : public Book {
    
};

class NonFiction : public Book {

};

int main() {

}