#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <char> vec = {'a','b','d','e'};
    vec.push_back('e');
    for (int i = 0 ; i <5 ; i++)
    {
        vec[i] = 'a' + i; 
    }
    println("{}" , vec);
}