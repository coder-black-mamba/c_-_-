#include <iostream>
using namespace std;

int main()
{
    cout << "Input The Celcius Temperature : ";
    int temp;
    cin >> temp;
    float f_temp = ((9 / 5) * temp) + 32;
    cout << "Farenhite : " << f_temp << endl;
}