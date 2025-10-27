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
    cout << "\nEnter integer to be counted: ";
    cin >> num1;
    int ans = count(vec.begin() , vec.end() , num1);

    cout << "\nThe frequency of " << num1 << " is: " << ans;
}