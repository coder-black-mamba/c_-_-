// Friend Function In Cpp


// class <class_name> {    
//            friend  <return_type>  <function_name>(argument/s);
// };

// Friend Function

//     A friend function is a special function in C++ which in spite of not being a member function of a class has the privilege to access private and protected data of a class.
//      A friend function is a non-member function or an ordinary function of a class, which is declared by using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.
//     The keyword “friend” is placed only in the function declaration but not in the function definition.
//     When the friend function is called neither the name of the object nor the dot operator is used. However, it may accept the object as an argument whose value it wants to access.
//     A friend function can be declared in any section of the class i.e. public, private, or protected.

#include <iostream>
using namespace std;


class Largest{
    int a,b,m;
    public:
        void set_data();
        friend void find_max(Largest);
};

// declearing the function body

void Largest::set_data(){
    cout<<"Enter The First Number";
    cin>>a;
    cout<<"\nEnter The Second Number";
    cin>>b;
}

void find_max(Largest t){
    if(t.a >t.b){
        t.m=t.a;
    }else{
        t.m=t.b;
    }

    cout<<"\n Largest number is "<<t.m;
}

int main(){
    Largest l;
    l.set_data();
    find_max(l);
    return 0;
}

