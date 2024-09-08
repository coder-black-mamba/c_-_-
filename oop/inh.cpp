#include <iostream>
using namespace std;

// Inheritance
// In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

// derived class (child) - the class that inherits from another class
// base class (parent) - the class being inherited from

// Base Class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! \n";
    }
};
// Derived Class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

// Multileel Inheritance

// Base Class
class MyClass
{
public:
    MyClass()
    {
        cout << "This is the base parent  \n" << endl;
    }
};

// derived class level-1
class MyChild : public MyClass
{
public:
    MyChild()
    {
        cout << "Derivved Class Level-2 \n";
    }
};

// Derived Class Level-3
class MyGrandChild:public MyChild
{
public:
    MyGrandChild()
    {
        cout << "This is my grandchild \n";
    }
};

int main()
{
    // Basic Inheritance
    // Car myCar;
    // myCar.honk();
    // cout<<myCar.brand<<endl;

    // Multi Level Inheritance
    // This means a class
    MyGrandChild myObj;
}