#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    vector <vector <int>> vec;
    for (int i = 0 ; i < n ; i++)
    {
        vector <int> v;
        int m;
        cout << "\nEnter " << i+1 << "th m: ";
        cin >> m;
        for (int i = 0 ; i < m ; i++) 
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        vec.push_back(v);
    }

    cout << "Roll" << "\tmax" << "\tmin" << "\tTotal" << "\tAverage\n";
    int roll = 1;
    for (auto &v : vec)
    {
        int max = *max_element(v.begin() , v.end());
        int min = *min_element(v.begin() , v.end());
        int total = accumulate(v.begin() , v.end() , 0ll);
        int ave = total/v.size();

        cout << roll << "\t" << max << "\t" << min << "\t" << total << "\t"<< ave << "\n";
        roll++;
    }
}