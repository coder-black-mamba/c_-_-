#include <cstdlib>
#include <list>
#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
/*

    Basic Library Mannagement System.
    1. Add A Book(Implement Book Class)
        - Book Name
        - Book Id
        - Description
        - Image Dileo Hoi Nadileo Hoi
    2. Implement Class For CRUD Operation On File As A Database


*/

// Classes For The Book Object
class Book
{
public:
    string name;
    string id;
    string writter;
    string desc;
    bool is_booked;
    Book(string n, string i, string w, string d, bool booked)
    {
        name = n;
        id = i;
        writter = w;
        desc = d;
        is_booked = booked;
    }
};
// Main book variable
list<Book> books;

// Classes For The CRUD Operation As The file opration
// db format
// name,id,writter,desc,is_booked
// class BOOK_DB{
//     public:
//         Book get_all_book(Book book){
//             list<Book> books;
//             string data;
//             ifstream DB("db.txt");
//             while(getline (DB,string data)){
//                 Book book_obj()
//                 books.push_back()
//             }
//             // read all file and return
//         }

// };

// Basic Data Structure For Storing In Database
/*
{
{
}

}




*/

int main()
{
    Book book_obj_1("Himu", "fdsdf", "Humayen", "Hey What The Fuck I Happening", false);
    list<Book> books;
    books.push_back(book_obj_1);
    // cout << "HEllo";
    // cout<<book_obj_1.name;
    // cout<<books.top();

    // File Operation

    // ifstream ReadDB("db.txt");
    // string txt;
    // while(getline(ReadDB,txt)){
    //     cout<<txt<<"_";
    // }

    // for (Book book : books)
    // {
    //     cout << book.name;
    // }

    // Book Crud Operation
    // add book
    // void add_book(string names, string writter, string desc, bool booked){
    //     Book book_obj(names, rand(), writter, desc, booked);
    // };
}
