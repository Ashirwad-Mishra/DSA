#include <bits/stdc++.h>
using namespace std;

// We select a pivot element .
// Put all elements smaller than pivot on the left of it.
// Put Put all elements greater than pivot on the right of it.
// Call the same function on left and right of it.
void swap(int &a , int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int partition(vector <int> &arr , int lb , int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(arr[start] , arr[end]);
        }
    }
    swap(arr[lb] , arr[ub]);

    return end;
}

void QuickSort(vector<int> &arr , int lb , int ub)
{
    if (lb >= ub) return;
    int loc = partition(arr , lb , ub);
    QuickSort(arr , lb , loc);
    QuickSort(arr , loc + 1 , ub);
}
void p(vector<int> &arr)
{
    for (auto &i : arr) cout << i << " ";
}
int main()
{
    vector <int> arr = {5 , 3 ,4 ,  6, 2, 3, 5, 4 , 9, 14};
    QuickSort(arr , 0 , 10);
    p(arr);
}