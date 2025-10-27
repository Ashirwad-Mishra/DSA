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

    reverse(vec.begin() , vec.end());

    cout << "\nUpdated Array ";
    for (int i : vec) cout << i << " ";
}