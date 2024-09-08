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
