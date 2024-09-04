//  function practise 
#include <iostream>
using namespace std;


int max(int x , int y){
    if (x>y){
        return x;
    }else{
        return y;
    }
}

// C++ Program to show function that takes
// two integers as parameters and returns
// an integer
// int max(int, int);

// A function that takes an int
// pointer and an int variable
// as parameters and returns
// a pointer of type int
// int* swap(int*, int);

// A function that takes
// a char as parameter and
// returns a reference variable
// char* call(char b);

// A function that takes a
// char and an int as parameters
// and returns an integer
// int fun(char, int);


// ================== Good Pointer Example
// void fun(int* ptr){ *ptr=30;}

// int main(){
//     int x=20;
//     fun(&x);
//     cout << "X = "<<x;
//     return 0;

// }


// C++ Program to demonstrate working of
// function using pointers
#include <iostream>
using namespace std;

void fun(int* ptr) { *ptr = 30; }

int main()
{
    int x = 20;
    fun(&x);
    cout << "x = " << x;

    return 0;
}

// Pass By Reference
#include <iostream>
#include <string>

void printString(const std::string& str) { // Note the 'const' to prevent modification
    std::cout << str << std::endl;
}

int main() {
    std::string myString = "welcome to gfg";
    printString(myString);
    return 0;
}

// Pass By Pointer
#include <iostream>
#include <string>

void printString(const std::string* str) { // Note the 'const' to prevent modification
    std::cout << *str << std::endl;
}

int main() {
    std::string myString = "This is Pss by pointer";
    printString(&myString);
    return 0;
}

