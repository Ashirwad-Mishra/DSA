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
    cout << "\nEnter the number whose index to be found: ";
    cin >> num1;
    int idx = find(vec.begin() ,vec.end() ,  num1) - vec.begin();

    cout << "\nThe " << num1 << " is found at " << idx <<".";
}