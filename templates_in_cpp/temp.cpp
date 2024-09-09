#include <iostream>
using namespace std;


// defining first template
template <typename T> T myMax(T x, T y){
    return (x>y)?x:y;
}


// Bubble Sort Using Template
template <class T>void bubbleSort(T a[],int n){
    for(int i =0 ;i<n-1;i++){
        for (int j=n-1;i<j;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}



int main(){
    // cout<<"template";
    // cout <<myMax<int>(3,7)<<endl;
    // cout<<myMax<char>('g','e')<<endl;

    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort<int>(a,n);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
}






// Class POinter
// C++ Program to implement
// template Array class
#include <iostream>
using namespace std;

template <typename T> class Array {
private:
    T* ptr;
    int size;

public:
    Array(T arr[], int s);
    void print();
};

template <typename T> Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
    return 0;
}


// MOre Argument Passing
// C++ Program to implement
// Use of template
#include <iostream>
using namespace std;

template <class T, class U> class A {
    T x;
    U y;

public:
    A() { cout << "Constructor Called" << endl; }
};

int main()
{
    A<char, char> a;
    A<int, double> b;
    return 0;
}


// Default Value For Templates
// C++ Program to implement
// Use of template
#include <iostream>
using namespace std;

template <class T, class U = char> class A {
public:
    T x;
    U y;
    A() { cout << "Constructor Called" << endl; }
};

int main()
{
    // This will call A<char, char>
    A<char> a;

    return 0;
}


// Can we pass non-type parameters to templates? 

// We can pass non-type arguments to templates
// C++ program to demonstrate
// working of non-type parameters
// to templates in C++
#include <iostream>
using namespace std;

template <class T, int max> int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];

    return m;
}

int main()
{
    int arr1[] = { 10, 20, 15, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = { 1, 2, 3 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Second template parameter
    // to arrMin must be a
    // constant
    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2);
  
    return 0;
}


// C++ program to show different data types using a
// constructor and template.
#include <iostream>
using namespace std;

// defining a class template
template <class T> class info {
public:
    // constructor of type template
    info(T A)
    {
        cout << "\n"
             << "A = " << A
             << " size of data in bytes:" << sizeof(A);
    }
    // end of info()
}; // end of class

// Main Function
int main()
{
    // clrscr();

    // passing character value by creating an objects
    info<char> p('x');

    // passing integer value by creating an object
    info<int> q(22);

    // passing float value by creating an object
    info<float> r(2.25);

    return 0;
}

// --------------------------------------------
// C++ program to show different data types using a
// constructor and template.
#include <iostream>
using namespace std;

// defining a class template
template <class T> class info {
public:
    // constructor of type template
    info(T A)
    {
        cout << "\n"
             << "A = " << A
             << " size of data in bytes:" << sizeof(A);
    }
    // end of info()
}; // end of class

// Main Function
int main()
{
    // clrscr();

    // passing character value by creating an objects
    info<char> p('x');

    // passing integer value by creating an object
    info<int> q(22);

    // passing float value by creating an object
    info<float> r(2.25);

    return 0;
}

// Template Argument Deduction

// Template argument deduction automatically deduces the data type of the argument passed to the class or function templatesv
// Note: It is important to note that the template argument deduction for classes is only available since C++17, so if we try to use the auto template argument deduction for a class in previous version, it will throw an error.


// Function Template Deduction
// It Has Support From 98's version

// C++ program to illustrate the function template argument
// deduction
#include <iostream>
using namespace std;

// defining function template
template <typename t> t multiply(t first, t second)
{
    return first * second;
}

// driver code
int main()
{
    auto result = multiply(10, 20);
    std::cout << "Multiplication OF 10 and 20: " << result
              << std::endl;

    return 0;
}
