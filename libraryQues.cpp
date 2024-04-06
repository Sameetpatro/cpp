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
    private: 
        string genre;
    public: 
        Fiction() : Book() {
            genre = "-not defined-";
        }

        Fiction(string author, string title, int year, string genre) : Book(author, title, year) {           
            this->genre = genre;
        }

        string getGenre() {
            cout << genre << endl;
            return genre;
        }
        
        void getData() {
            Book::getData();
            cout << genre << endl;
        }
};

class NonFiction : public Book {
    private: 
        string topic;
    public: 
        NonFiction() : Book() {
            this->topic = "-not defined-";
        }

        NonFiction(string author, string title, int year, string topic) : Book(author, title, year) {
            
            this->topic = topic;    
        }

        string getTopic() {
            cout << this->topic << endl;
            return this->topic;
        }

        void getData() {
            Book::getData();
            cout << topic << endl;
        }
};

int main() {
    Fiction book1("author", "title", 2024, "genre");
    book1.getData();
}