#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> vec(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> vec[i];
    }
    unordered_map <int , int> markToRank;
    priority_queue <int , vector<int>>maxHeap(vec.begin() , vec.end());

    int r = 1;
    while(!maxHeap.empty())
    {
        if (markToRank.find(maxHeap.top()) == markToRank.end())
        {
            markToRank[maxHeap.top()] = r;
        }
        r++;
        maxHeap.pop();
    }

    for (int i : vec)
    {
        cout << markToRank[i] << "  ";
    }
}