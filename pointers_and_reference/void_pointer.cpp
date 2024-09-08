#include <iostream>
using namespace std;
/*
--------**********************---------------
In general, it is not safe to use a pointer that has been converted (‘‘cast’’) to a type that differs from
the type of the object pointed to.
--------**********************---------------

The primary use for void∗ is for passing pointers to functions that are not allowed to make
assumptions about the type of the object and for returning untyped objects from functions. To use
such an object, we must use explicit type conversion.

--------**********************---------------

*/

// example
void f(int *pi)
{

    void * pv = pi; // ok: implicit conversion of int* to void*
    // ∗pv;
    // error: can’t dereference void*
    // ++pv;
    // error: can’t increment void* (the size of the object pointed to is unknown)

    // explicit conversion back to int*
    int* pi2=static_cast<int*>(pv);
    // double pd1=pv;//error
    // double* pd2=pi;//eror
    // double pd3=static_cast<double*>(pv);//unsafe
}

int main()
{
    // A void∗ is used for that. You can read
    // void∗ as ‘‘pointer to an object of unknown type.’’
    // cout <<"Hello";
    int p = 3;
    int *poi = &p;
    f(poi);
}