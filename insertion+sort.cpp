#include<bits/stdc++.h>
using namespace std;

void shift(int i, int A[])
{
    A[i+1] = A[i];
}

int main()
{
    int A[7] = {7, 3, 5, 2, 8, 9, 1};
    for (int i = 1; i < 7; i++)
    {
        int temp = A[i];
        if (temp < A[i-1])
        {
            int j = i - 1;
            while (A[j] > temp && j >= 0)  // Fixed the condition here
            {
                shift(j, A);
                j--;
            }
            A[j + 1] = temp;  // Place the temp in the correct position
        }
    }
    
    cout << "The Sorted Array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
}