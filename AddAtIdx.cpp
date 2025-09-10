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

    int num1;
    cout << "\nThe number to be added: ";
    cin >> num1;

    int idx;
    cout << "\nEnter index of integer to be updated: ";
    cin >> idx;
    vec.insert(vec.begin() + idx , num1);

    cout << "\nUpdated Array ";
    for (int i : vec) cout << i << " ";
}