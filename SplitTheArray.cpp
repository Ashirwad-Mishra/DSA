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

    int idx1 = min_element(vec.begin() , vec.end()) - vec.begin();
    int idx2 = max_element(vec.begin() , vec.end()) - vec.begin();

    cout << idx1 << " " << idx2;

    vector <int> newVec1(vec.begin() ,vec.begin() + idx1);
    for (auto i : newVec1) cout << " " <<i;
    vector <int> newVec2(vec.begin() + idx1 , vec.begin() + idx2);
    for (auto i : newVec2) cout << " " <<i;
    vector <int> newVec3(vec.begin() + idx2 , vec.end());
    for (auto i : newVec3) cout << " " <<i;

    // vector <int> newVec(newVec2.begin() , newVec2.end());
    newVec.insert(newVec2.begin() , newVec2.end());
    newVec.insert(newVec1.begin() , newVec1.end());
    newVec.insert(newVec3.begin() , newVec3.end());
    cout << "\nUpdated Array ";
    for (int i : newVec) cout << i << " ";
}