// C++ Encapsulation

#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
    public:
    //setter
    void setSalary(int s){
        salary=s;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    Employee sayed;
    sayed.setSalary(500);
    cout<<sayed.getSalary();
}