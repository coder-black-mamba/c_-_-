#include <iostream>
using namespace std;
//     C++ Function Overloading

// Function Overloading is defined as the process of having two or more functions with the same name, but different parameters. In function overloading, the function is redefined by using either different types or number of arguments. It is only through these differences a compiler can differentiate between the functions.

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

// Function Overloading and Ambiguity

// When the compiler is unable to decide which function is to be invoked among the overloaded function, this situation is known as function overloading ambiguity.
// When the compiler shows the ambiguity error, the compiler does not run the program.

// Causes of Ambiguity:

//     Type Conversion.
//     Function with default arguments.
//     Function with pass-by-reference.
void fun(int);
void fun(float);
void fun(int i) { cout << "Value of i is : " << i << endl; }
void fun(float j)
{
    cout << "Value of j is : " << j << endl;
}

// Ambuiguity Pass By Reference
// void fun(int);
// void fun(int&);
// int main()
// {
//     int a = 10;
//     fun(a); // error, which fun()?
//     return 0;
// }
// void fun(int x) { cout << "Value of x is : " << x << endl; }
// void fun(int& b)
// {
//     cout << "Value of b is : " << b << endl;
// }

// int main()
{
    // Overloading Example
    // cout<<add(1,2,5);

    // Ambiguity Error
    // fun(12);
    // fun(1.2);
}