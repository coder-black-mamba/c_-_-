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
    int id;
    string writter;
    string desc;
    bool is_booked;
    Book(string n, int i, string w, string d, bool booked)
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
void show_avilable_books()
{

    // Printing Header
    cout << "------------------------------------------------------------------\n";
    cout << "     id     " << "|" << "  Name  " << "|" << "  Writter  " << "| " << "  Description  " << "| " << " Status " << "| \n";
    cout << "------------------------------------------------------------------\n";

    for (Book element : books)
    {
        string is_booked = "not booked";

        if (element.is_booked)
        {
            is_booked = "booked";
        }

        cout << element.id << " | " << element.name << " | " << element.writter << " | " << element.desc << " | " << is_booked << "\n";
    }
};

int main()
{
    // Book book_obj_1("Himu", "fdsdf", "Humayen", "Hey What The Fuck I Happening", false);

    // Book Holder
    // list<Book> books;
    // books.push_back(book_obj_1);

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

    // fucntion for taking input from the user and save it to a variable
    // string str_input(){

    // }
    // Show Avilable Books

    // add book
    while (true)
    {
        cout << "\n\n";
        cout << "Please Select Options : \n";
        cout << " |->1. Add A Book \n";
        cout << " |->2. Show Avilable Books \n";
        cout << " |->3. Rent A Book \n";

        // User Base Menu Selection Input
        int user_input;
        cout << " : ";
        cin >> user_input;

        // name,id,writter,desc,is_booked

        // checking user input
        if (user_input == 1)
        {
            // cout<<"Add A Book";
            // Adding A Book
            try
            {
                // name
                string book_name;
                cout << "Please Input Book Name : ";
                cin >> book_name;
                // writter
                string writter;
                cout << "Please Input writter Name : ";
                cin >> writter;

                // desc
                string desc;
                cout << "Please Input Description : ";
                cin >> desc;

                // is_booked
                // bool is_booked;
                // cout << "Please Input writter Name : ";
                // cin >> writter;
                // cout<<"\n";

                Book book_obj(book_name, rand(), writter, desc, false);
                books.push_back(book_obj);

                show_avilable_books();
            }
            catch (int v)
            {
                cout << "Please Input Correct Data";
            }
        }
        else if (user_input == 2)
        {
            cout << "---------------Showing Avilable Books -------------- \n";
            show_avilable_books();
        }
        else if (user_input == 3)
        {
            show_avilable_books();
            cout << "Please Enter The Id Of The Bok You Want To Rent\n";
            int id;
            cin >> id;

            int tracker=0;
            for(Book element:books){
                tracker++;
                if (element.id==id and !element.is_booked)
                {
                   element.is_booked=true;
                //    books[tracker].is_booked=true;
                }
                
            }

            cout<<"Book Renting Successfull\n";
            show_avilable_books();
        }
        else
        {
            cout << "Please Select Input Between From 1-3 :) \n";
        }
    }
}
