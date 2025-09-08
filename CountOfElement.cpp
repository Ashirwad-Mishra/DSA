#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter no of elements: ";
    cin >> n;

    vector<int> vec(n);
    cout << "\nEnter n space seperated ints: ";
    for (int i = 0 ; i < n ; i++) cin >> vec[i];

    int idx;
    cout << "\nEnter index of integer to be deleted: ";
    cin >> idx;
    vec.erase(vec.begin() + idx);

    cout << "\nUpdated Array ";
    for (int i : vec) cout << i << " ";
}