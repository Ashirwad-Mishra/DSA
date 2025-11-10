#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(vector <int>& waight , vector <int> &gain , int capacity)
{
    priority_queue< pair <double , pair<int ,int> > > pq;
    int n = waight.size();
    for(int i = 0 ; i < n ; i++)
    {
        double ratio = (double)gain[i] / waight[i];
        pq.push({ratio , {waight[i] , gain[i]}});
    }
    double totalGain = 0.0;
    while(capacity > 0 && !pq.empty())
    {
        auto curr = pq.top();
        pq.pop();
        int wt = curr.second.first;
        int val = curr.second.second;
        double ratio = curr.first;
        if(wt <= capacity)
        {
            totalGain += val;
            capacity -= wt;
        }
        else
        {
            totalGain += ratio * capacity;
            capacity = 0;
        }
    }
    return totalGain;
}