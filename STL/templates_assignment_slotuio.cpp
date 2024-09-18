#include <iostream>
using namespace std;

// Part 1: Function Templates
// Write a function template swap_values that can swap two values of any type.
template <typename T>
auto my_swap(T *x, T *y)
{
    T *temp = x;
    x = y;
    y = temp;
    cout << *x << *y;
    return 0;
}

// Create a function template find_max that returns the maximum of three values of any comparable type.

template <typename T>
T my_max(T x, T y, T z)
{

    if (x > y)
    {
        if (x > z)
        {
            return x;
        }
    }
    else if (y > z)
    {
        return y;
    }
    return z;
}

// Implement a function template print_array that can print arrays of any type and any size.


int main()
{
    // cout<<"Hello WOrld";
    // int v1=10;
    // int v2=20;
    // char c1='c';

    // int swapped=my_swap(&v1,&v2);
    // cout<<"V1 "<<v1 <<endl;
    // cout<<"V2 "<<v2 <<endl;

    // And To The Question No : 2 - Solved
    int mx = my_max(5, 5, 5);
    cout << mx;
}