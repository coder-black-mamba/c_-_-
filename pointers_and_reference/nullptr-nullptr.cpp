#include <iostream>
using namespace std;
/*--------**********************---------------
    The literal nullptr represents the null pointer, that is, a pointer that does not point to an object. It
    can be assigned to any pointer type, but not to other built-in types:
--------**********************---------------*/
int main()
{

    int *pi = nullptr;//initializing as a pointer to be null;
    double* pd=nullptr;//initializing as a pointer to be null;
    int i = nullptr;//error:cause i is not a pointer
}