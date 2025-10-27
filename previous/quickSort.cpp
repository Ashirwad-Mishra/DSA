#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int lb, int ub) 
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while (start < end) 
    {
        while (start <= ub && arr[start] <= pivot) start++;
        while (arr[end] > pivot) end--;
        if (start < end) swap(arr[start], arr[end]);
    }
    swap(arr[lb], arr[end]); 
    return end;
}

void QuickSort(vector<int> &arr, int lb, int ub) 
{
    if (lb < ub) 
    {
        int loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc - 1);
        QuickSort(arr, loc + 1, ub);
    }
}

void print(vector<int> &arr) 
{
    for (auto &i : arr) cout << i << " ";
    cout << endl;
}

int main() 
{
    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    QuickSort(arr, 0, arr.size() - 1);
    print(arr);
}