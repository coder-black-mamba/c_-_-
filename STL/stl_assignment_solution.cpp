#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    // ***************==========Vector Starts===============***************
    vector<int> arr({1, 2, 3, 4, 5});
    // we can also do this
    // vector<int> arr={1,2,3,4,5};
    // can also do this
    // vector<int> arr{1,2,3,4,5};

    // add element to the vector
    arr.push_back(6);
    // remove element from vector
    arr.pop_back();
    // sort the vector
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(8);
    // sorting the arr
    sort(arr.begin(), arr.end());

    // find an ekement in a vector
    auto it = find(arr.begin(), arr.end(), 55);
    // founded index
    // if element not found "it" will be equal to vector.end()
    if (it != arr.end())
    {
        int id = it - arr.begin();
        cout << "element found at index :" << id << endl;
    }else{
        cout<<"Element Not Found";
    }

    // cout << it - arr.begin() << endl;

    // printing the vectors
    for (int i : arr)
    {
        cout << i;
    }
    // ***************==========Vector Ends===============***************
}