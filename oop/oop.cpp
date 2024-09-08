#include <iostream>
using namespace std;

// class MyClass
// {
// private:
//     /* data */
// public:
//     MyClass(/* args */);
//     ~MyClass();
// };

// MyClass::MyClass(/* args */)
// {
// }

// MyClass::~MyClass()
// {
// }

// Basic Class
class MyClass
{                    // the main class declearation
public:              // access specifier
    int myNum;       // attribute
    string myString; // Attribute
};

class Car
{
public:
    string name;
    string brand;
    int year;
};

int main1()
{
    // Create an Object

    // In C++, an object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.
    // Basic Usage
    MyClass myObj;

    myObj.myNum = 20;
    myObj.myString = "fahmida eva";

    // cout << myObj.myNum <<endl;
    // cout << myObj.myString <<endl;

    // Multiple Car Object
    Car toyota;
    toyota.brand = "Toyota";
    toyota.name = "Toyota Hybrid";
    toyota.year = 2024;

    Car prado;
    prado.brand = "Prado";
    prado.name = "Prado X416";
    prado.brand = "Prado";

    return 0;
}

// Methods are functions that belongs to the class.
/*There are two ways to define functions that belongs to a class:

    * Inside class definition
    * Outside class definition
*/

// Inside Class Defintaion
class Car2
{
public:
    string name;
    void printCar()
    {
        cout << "Car Name Is " << name;
    }
    void sayName(string name);
};

// Outside Class Example
void Car2::sayName(string name)
{
    cout << "Hello I am Saying Name. And The Name Is " << name;
}

int main2()
{
    Car2 mercedes;
    mercedes.name = "Benz GLE";
    // mercedes.printCar();
    mercedes.sayName(mercedes.name);
    return 0;
}

/*

Constructors

A constructor in C++ is a special method that is automatically called when an object of a class is created.Constructors

A constructor in C++ is a special method that is automatically called when an object of a class is created.

*/

// Constructore Example
class Person
{
public:
    string name;
    int age;
    int height;
    Person(string x, int y, int z)
    {
        name = x;
        age = y;
        height = z;
    };
};

int main3()
{
    Person p1("Sayed", 23, 6);
    cout << p1.age;
    return 0;
}
// Access Specifiers

// The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. In the example above, the members are public - which means that they can be accessed and modified from outside the code.

// However, what if we want members to be private and hidden from the outside world?

// In C++, there are three access specifiers:

//     public - members are accessible from outside the class
//     private - members cannot be accessed (or viewed) from outside the class
//     protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

// In the following example, we demonstrate the differences between public and private members

class Test
{
public:
    int pb;

private:
    int pv;
};

// int main(){
//     Test t1;
//     t1.pb=2;
//     t1.pv=3;
// }
