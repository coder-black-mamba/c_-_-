#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it == v.end())
        {
            cout << "No" << endl;
        }
        else if (*it == x)
        {
            cout << "Yes" << endl;
        }
        else

        // if (binary_search(v.begin(), v.end(), x))
        {
            cout << "Yes" << endl;
        }
        {
            cout << "No" << endl;
        }
    }
    return 0;
}